---
search:
    keywords: ['multi_index', 'eosio::multi_index']
---

# group multi\_index

Defines EOSIO Multi Index Table. [More...](#detailed-description)
## Classes

|Type|Name|
|-----|-----|
|class|[**eosio::multi\_index**](classeosio_1_1multi__index.md)|


## Detailed Description

EOSIO Multi-Index API provides a C++ interface to the EOSIO database. It is patterned after Boost Multi Index Container. EOSIO Multi-Index table requires exactly a uint64\_t primary key. For the table to be able to retrieve the primary key, the object stored inside the table is required to have a const member function called primary\_key() that returns uint64\_t. EOSIO Multi-Index table also supports up to 16 secondary indices. The type of the secondary indices could be any of:
* uint64\_t
* uint128\_t
* double
* long double
* **[eosio::checksum256](namespaceeosio_a3e6c9320b8fad56e0a1360a97557b14f.md#1a3e6c9320b8fad56e0a1360a97557b14f)**




**Template parameters:**


* **TableName** - name of the table 
* **T** - type of the data stored inside the table 
* **Indices** - secondary indices for the table, up to 16 indices is supported here

Example:

```cpp
#include <eosiolib/eosio.hpp>
using namespace eosio;
class mycontract: contract {
  struct record {
    uint64_t    primary;
    uint64_t    secondary_1;
    uint128_t   secondary_2;
    checksum256 secondary_3;
    double      secondary_4;
    long double secondary_5;
    uint64_t primary_key() const { return primary; }
    uint64_t get_secondary_1() const { return secondary_1; }
    uint128_t get_secondary_2() const { return secondary_2; }
    checksum256 get_secondary_3() const { return secondary_3; }
    double get_secondary_4() const { return secondary_4; }
    long double get_secondary_5() const { return secondary_5; }
  };
  public:
    mycontract(name receiver, name code, datastream<const char*> ds):contract(receiver, code, ds){}
    void myaction() {
      auto code = _self;
      auto scope = _self;
      multi_index<"mytable"_n, record,
        indexed_by< "bysecondary1"_n, const_mem_fun<record, uint64_t, &record::get_secondary_1> >,
        indexed_by< "bysecondary2"_n, const_mem_fun<record, uint128_t, &record::get_secondary_2> >,
        indexed_by< "bysecondary3"_n, const_mem_fun<record, checksum256, &record::get_secondary_3> >,
        indexed_by< "bysecondary4"_n, const_mem_fun<record, double, &record::get_secondary_4> >,
        indexed_by< "bysecondary5"_n, const_mem_fun<record, long double, &record::get_secondary_5> >
      > table( code, scope);
    }
}
EOSIO_DISPATCH( mycontract, (myaction) )
```

 
