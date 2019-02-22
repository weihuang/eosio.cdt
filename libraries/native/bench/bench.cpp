/**
 *  @file
 *  @copyright defined in eosio.cdt/LICENSE.txt
 */
#pragma once

#include <algorithm>
#include <assert.h>
#include <iomanip>
#include <numeric>
#include <regex>

#include <eosio/print.hpp>

#include "bench.h"

using eosio::print;

void benchmark::ConsolePrinter::header()
{
   print("# Benchmark, evals, iterations, total, min, max, median");
}

void benchmark::ConsolePrinter::result(const State& state)
{
   auto results{state.m_elapsed_results};
   std::sort(results.begin(), results.end());

   double total{state.m_num_iters * std::accumulate(results.begin(), results.end(), 0.0)};

   double front{};
   double back{};
   double median{};

   if (!results.empty()) {
      front = results.front();
      back = results.back();

      size_t mid{results.size() / 2};
      median = results[mid];
      if (0 == results.size() % 2) {
         median = (results[mid] + results[mid + 1]) / 2;
      }
   }

   print(state.m_name, ", ", state.m_num_evals, ", ", state.m_num_iters, ", ", total, ", ", front, ", ", back, ", ", median);
}

void benchmark::ConsolePrinter::footer() {}
benchmark::PlotlyPrinter::PlotlyPrinter(std::string plotly_url, int64_t width, int64_t height)
   : m_plotly_url(plotly_url), m_width(width), m_height(height)
{
}

void benchmark::PlotlyPrinter::header()
{
   print( "<html><head>",
          "<script src=\"", m_plotly_url, "\"></script>",
          "</head><body><div id=\"myDiv\" style=\"width:", m_width, "px; height:", m_height, "px\"></div>",
          "<script> var data = [");
}

void benchmark::PlotlyPrinter::result(const State& state)
{
   print( "{\n",
          "  name: '", state.m_name, "',\n",
          "  y: [" );

   const char* prefix = "";
   for (const auto& e : state.m_elapsed_results) {
      print(prefix, e);
      prefix = ", ";
   }
   print( "],\n",
          "  boxpoints: 'all', jitter: 0.3, pointpos: 0, type: 'box',\n",
          "}," );
}

void benchmark::PlotlyPrinter::footer()
{
   print( "]; var layout = { showlegend: false, yaxis: { rangemode: 'tozero', autorange: true } };",
          "Plotly.newPlot('myDiv', data, layout);",
          "</script></body></html>" );
}


benchmark::BenchRunner::BenchmarkMap& benchmark::BenchRunner::benchmarks()
{
   static std::map<std::string, Bench> benchmarks_map;
   return benchmarks_map;
}

benchmark::BenchRunner::BenchRunner(std::string name, benchmark::BenchFunction func, uint64_t num_iters_for_one_second)
{
   benchmarks().insert(std::make_pair(name, Bench{func, num_iters_for_one_second}));
}

void benchmark::BenchRunner::RunAll(Printer& printer, uint64_t num_evals, double scaling, const std::string& filter, bool is_list_only)
{
   if (!std::ratio_less_equal<benchmark::clock::period, std::micro>::value) {
      print("WARNING: Clock precision is worse than microsecond - benchmarks may be less accurate!\n");
   }
#ifdef DEBUG
   print("WARNING: This is a debug build - may result in slower benchmarks.\n");
#endif

   std::regex reFilter{filter};
   std::smatch baseMatch;

   printer.header();

   for (const auto& p : benchmarks()) {
      if (!std::regex_match(p.first, baseMatch, reFilter)) {
         continue;
      }

      uint64_t num_iters = static_cast<uint64_t>(p.second.num_iters_for_one_second * scaling);
      if (0 == num_iters) {
         num_iters = 1;
      }
      State state(p.first, num_evals, num_iters, printer);
      if (!is_list_only) {
         p.second.func(state);
      }
      printer.result(state);
   }

   printer.footer();
}

bool benchmark::State::UpdateTimer(const benchmark::time_point current_time)
{
   if (m_start_time != time_point()) {
      std::chrono::duration<double> diff{current_time - m_start_time};
      m_elapsed_results.push_back(diff.count() / m_num_iters);

      if (m_elapsed_results.size() == m_num_evals) {
         return false;
      }
   }

   m_num_iters_left = m_num_iters - 1;
   return true;
}
