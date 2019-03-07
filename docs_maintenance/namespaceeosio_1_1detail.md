---
search:
    keywords: ['eosio::detail', 'check_types', 'check_types< Action, I, T >', 'convert', 'convert< char * >', 'convert< const char * >', 'get_nth', 'get_nth_impl', 'get_nth_impl< N, N, Arg, Args... >', 'is_same', 'is_same< bool, U >', 'is_same< T, bool >', 'to_const_char_arr', 'unwrap', 'unwrap< ignore< T > >', 'deduced', 'deduced_nounwrap', 'get_args', 'get_args_nounwrap', 'type_check']
---

# namespace eosio::detail

[**Class List**](annotated.md) **>** [**eosio**](namespaceeosio.md) **::** [**detail**](namespaceeosio_1_1detail.md)


## Classes

|Type|Name|
|-----|-----|
|struct|[**check\_types**](structeosio_1_1detail_1_1check__types.md)|
|struct|[**check\_types< Action, I, T >**](structeosio_1_1detail_1_1check__types_3_01_action_00_01_i_00_01_t_01_4.md)|
|struct|[**convert**](structeosio_1_1detail_1_1convert.md)|
|struct|[**convert< char \* >**](structeosio_1_1detail_1_1convert_3_01char_01_5_01_4.md)|
|struct|[**convert< const char \* >**](structeosio_1_1detail_1_1convert_3_01const_01char_01_5_01_4.md)|
|struct|[**get\_nth**](structeosio_1_1detail_1_1get__nth.md)|
|struct|[**get\_nth\_impl**](structeosio_1_1detail_1_1get__nth__impl.md)|
|struct|[**get\_nth\_impl< N, N, Arg, Args... >**](structeosio_1_1detail_1_1get__nth__impl_3_01_n_00_01_n_00_01_arg_00_01_args_8_8_8_01_4.md)|
|struct|[**is\_same**](structeosio_1_1detail_1_1is__same.md)|
|struct|[**is\_same< bool, U >**](structeosio_1_1detail_1_1is__same_3_01bool_00_01_u_01_4.md)|
|struct|[**is\_same< T, bool >**](structeosio_1_1detail_1_1is__same_3_01_t_00_01bool_01_4.md)|
|struct|[**to\_const\_char\_arr**](structeosio_1_1detail_1_1to__const__char__arr.md)|
|struct|[**unwrap**](structeosio_1_1detail_1_1unwrap.md)|
|struct|[**unwrap< ignore< T > >**](structeosio_1_1detail_1_1unwrap_3_01ignore_3_01_t_01_4_01_4.md)|



|Type|Name|
|-----|-----|
|typedef decltype(**[get\_args](group__action_gaf21ef9cbbd55e02cd5c25be290cbf344.md#gaf21ef9cbbd55e02cd5c25be290cbf344)**(Action))|[**deduced**](group__action_gaacfcc46392b7e9dba3e8c7a0fe16882f.md#gaacfcc46392b7e9dba3e8c7a0fe16882f)|
|typedef decltype(**[get\_args\_nounwrap](group__action_gac5b403e348ad44f1179170abf58376ed.md#gac5b403e348ad44f1179170abf58376ed)**(Action))|[**deduced\_nounwrap**](group__action_ga339c5b4ff7e7f23dd20bef9f3eaebe32.md#ga339c5b4ff7e7f23dd20bef9f3eaebe32)|



|Type|Name|
|-----|-----|
|auto|[**get\_args**](group__action_gaf21ef9cbbd55e02cd5c25be290cbf344.md#gaf21ef9cbbd55e02cd5c25be290cbf344) (R(Act::\*)(Args...) p) |
|auto|[**get\_args\_nounwrap**](group__action_gac5b403e348ad44f1179170abf58376ed.md#gac5b403e348ad44f1179170abf58376ed) (R(Act::\*)(Args...) p) |
|constexpr bool|[**type\_check**](group__action_ga2a11604fa722268266d668ff091676ff.md#ga2a11604fa722268266d668ff091676ff) () |


## Typedefs Documentation

### typedef <a id="gaacfcc46392b7e9dba3e8c7a0fe16882f" href="#gaacfcc46392b7e9dba3e8c7a0fe16882f">deduced</a>

```cpp
using eosio::detail::deduced = typedef decltype(get_args(Action));
```



### typedef <a id="ga339c5b4ff7e7f23dd20bef9f3eaebe32" href="#ga339c5b4ff7e7f23dd20bef9f3eaebe32">deduced\_nounwrap</a>

```cpp
using eosio::detail::deduced_nounwrap = typedef decltype(get_args_nounwrap(Action));
```



## Functions Documentation

### function <a id="gaf21ef9cbbd55e02cd5c25be290cbf344" href="#gaf21ef9cbbd55e02cd5c25be290cbf344">get\_args</a>

```cpp
auto eosio::detail::get_args (
    R(Act::*)(Args...) p
)
```



### function <a id="gac5b403e348ad44f1179170abf58376ed" href="#gac5b403e348ad44f1179170abf58376ed">get\_args\_nounwrap</a>

```cpp
auto eosio::detail::get_args_nounwrap (
    R(Act::*)(Args...) p
)
```



### function <a id="ga2a11604fa722268266d668ff091676ff" href="#ga2a11604fa722268266d668ff091676ff">type\_check</a>

```cpp
constexpr bool eosio::detail::type_check ()
```





----------------------------------------
The documentation for this class was generated from the following file: `in/eosio.cdt/libraries/eosiolib/action.hpp`
