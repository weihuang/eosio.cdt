---
search:
    keywords: ['multiindex', 'eosio::indexed_by', 'multi_index', 'get_code', 'get_scope', 'cbegin', 'begin', 'cend', 'end', 'crbegin', 'rbegin', 'crend', 'rend', 'lower_bound', 'upper_bound', 'available_primary_key', 'get_index', 'get_index', 'iterator_to', 'emplace', 'modify', 'modify', 'get', 'find', 'require_find', 'erase', 'erase']
---

# group multiindex

Defines EOSIO Multi Index Table. [More...](#detailed-description)
## Classes

|Type|Name|
|-----|-----|
|struct|[**eosio::indexed\_by**](structeosio_1_1indexed__by.md)|


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

 
## Functions Documentation

### function <a id="gaa081f69f6fa288869d1d5881f0be04dd" href="#gaa081f69f6fa288869d1d5881f0be04dd">multi\_index</a>

```cpp
multiindex::multi_index (
    name code,
    uint64_t scope
)
```

load\_object\_by\_primary\_iterator 

Constructs an instance of a Multi-Index table.


**Parameters:**


* **code** - Account that owns table 
* **scope** - Scope identifier within the code hierarchy



**Precondition:**

code and scope member properties are initialized 




**Post**

each secondary index table initialized 




**Post**

Secondary indices are updated to refer to the newly added object. If the secondary index tables do not exist, they are created. 




**Post**

The payer is charged for the storage usage of the new object and, if the table (and secondary index tables) must be created, for the overhead of the table creation.


Notes The `` template has template parameters `<`, where:
* `TableName` is the name of the table, maximum 12 characters long, characters in the name from the set of lowercase letters, digits 1 to 5, and the "." (period) character and is converted to a eosio::raw - which wraps uint64\_t;
* `T` is the object type (i.e., row definition);
* `Indices` is a list of up to 16 secondary indices.
* Each must be a default constructable class or struct
* Each must have a function call operator that takes a const reference to the table object type and returns either a secondary key type or a reference to a secondary key type
* It is recommended to use the **[eosio::const\_mem\_fun](structeosio_1_1const__mem__fun.md)** template, which is a type alias to the boost::multi\_index::const\_mem\_fun. See the documentation for the Boost **[const\_mem\_fun](structeosio_1_1const__mem__fun.md)** key extractor for more details.


Example:

```cpp
#include <eosiolib/eosio.hpp>
using namespace eosio;
using namespace std;
class addressbook: contract {
  struct address {
     uint64_t account_name;
     string first_name;
     string last_name;
     string street;
     string city;
     string state;
     uint64_t primary_key() const { return account_name; }
  };
  public:
    addressbook(name self):contract(self) {}
    typedef eosio::multi_index< "address"_n, address > address_index;
    void myaction() {
      address_index addresses(_self, _self.value); // code, scope
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="ga6ef0fb806ad6edf50b670a115fc3d5a1" href="#ga6ef0fb806ad6edf50b670a115fc3d5a1">get\_code</a>

```cpp
name multiindex::get_code () const
```


Returns the `code` member property.


**Returns:**

Account name of the Code that owns the Primary Table.


Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      address_index addresses("dan"_n, "dan"_n); // code, scope
      eosio::check(addresses.get_code() == "dan"_n, "Codes don't match.");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="ga0690e9e9a30254240fa0cb6bb12bebf3" href="#ga0690e9e9a30254240fa0cb6bb12bebf3">get\_scope</a>

```cpp
uint64_t multiindex::get_scope () const
```


Returns the `scope` member property.


**Returns:**

Scope id of the Scope within the Code of the Current Receiver under which the desired Primary Table instance can be found.


Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      address_index addresses("dan"_n, "dan"_n); // code, scope
      eosio::check(addresses.get_code() == "dan"_n, "Scopes don't match");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="ga36ad6b1c1013b6f753660b334de96aef" href="#ga36ad6b1c1013b6f753660b334de96aef">cbegin</a>

```cpp
const_iterator multiindex::cbegin () const
```


Returns an iterator pointing to the object\_type with the lowest primary key value in the Multi-Index table.


**Returns:**

An iterator pointing to the object\_type with the lowest primary key value in the Multi-Index table.


Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example below
      // add dan account to table           - see emplace example below

      auto itr = addresses.find("dan"_n);
      eosio::check(itr == addresses.cbegin(), "Only address is not at front.");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="ga060b08a9da300e3a4ab669b35f07c9bc" href="#ga060b08a9da300e3a4ab669b35f07c9bc">begin</a>

```cpp
const_iterator multiindex::begin () const
```


Returns an iterator pointing to the object\_type with the lowest primary key value in the Multi-Index table.


**Returns:**

An iterator pointing to the object\_type with the lowest primary key value in the Multi-Index table.


Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example below
      // add dan account to table           - see emplace example below

      auto itr = addresses.find("dan"_n);
      eosio::check(itr == addresses.begin(), "Only address is not at front.");
    }
}
EOSIO_ABI( addressbook, (myaction) )
```

 

### function <a id="gaece639944fa9031debbd984bbd42485a" href="#gaece639944fa9031debbd984bbd42485a">cend</a>

```cpp
const_iterator multiindex::cend () const
```


Returns an iterator pointing to the `object\_type` with the highest primary key value in the Multi-Index table.


**Returns:**

An iterator pointing to the `object\_type` with the highest primary key value in the Multi-Index table.


Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example below
      // add dan account to table           - see emplace example below

      auto itr = addresses.find("dan"_n);
      eosio::check(itr != addresses.cend(), "Address for account doesn't exist");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="ga748fcb4d6a08962ad8a7c92da359e3d7" href="#ga748fcb4d6a08962ad8a7c92da359e3d7">end</a>

```cpp
const_iterator multiindex::end () const
```


Returns an iterator pointing to the `object\_type` with the highest primary key value in the Multi-Index table.


**Returns:**

An iterator pointing to the `object\_type` with the highest primary key value in the Multi-Index table.


Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example below
      // add dan account to table           - see emplace example below

      auto itr = addresses.find("dan"_n);
      eosio::check(itr != addresses.end(), "Address for account doesn't exist");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="gabe296816f75cdb69e6698724e7b0c29d" href="#gabe296816f75cdb69e6698724e7b0c29d">crbegin</a>

```cpp
const_reverse_iterator multiindex::crbegin () const
```


Returns a reverse iterator pointing to the `object\_type` with the highest primary key value in the Multi-Index table.


**Returns:**

A reverse iterator pointing to the `object\_type` with the highest primary key value in the Multi-Index table.


Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example below
      // add dan account to table           - see emplace example below
      // add additional account - brendan

      addresses.emplace(payer, [&](auto& address) {
        address.account_name = "brendan"_n;
        address.first_name = "Brendan";
        address.last_name = "Blumer";
        address.street = "1 EOS Way";
        address.city = "Hong Kong";
        address.state = "HK";
      });
      auto itr = addresses.crbegin();
      eosio::check(itr->account_name == name("dan"), "Lock arf, Incorrect Last Record ");
      itr++;
      eosio::check(itr->account_name == name("brendan"), "Lock arf, Incorrect Second Last Record");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="gacdc14cc71a43489507341d2709696e7d" href="#gacdc14cc71a43489507341d2709696e7d">rbegin</a>

```cpp
const_reverse_iterator multiindex::rbegin () const
```


Returns a reverse iterator pointing to the `object\_type` with the highest primary key value in the Multi-Index table.


**Returns:**

A reverse iterator pointing to the `object\_type` with the highest primary key value in the Multi-Index table.


Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example below
      // add dan account to table           - see emplace example below
      // add additional account - brendan

      addresses.emplace(payer, [&](auto& address) {
        address.account_name = "brendan"_n;
        address.first_name = "Brendan";
        address.last_name = "Blumer";
        address.street = "1 EOS Way";
        address.city = "Hong Kong";
        address.state = "HK";
      });
      auto itr = addresses.rbegin();
      eosio::check(itr->account_name == name("dan"), "Lock arf, Incorrect Last Record ");
      itr++;
      eosio::check(itr->account_name == name("brendan"), "Lock arf, Incorrect Second Last Record");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="ga6ce680bcec3a391e0ad89a1cd1143231" href="#ga6ce680bcec3a391e0ad89a1cd1143231">crend</a>

```cpp
const_reverse_iterator multiindex::crend () const
```


Returns an iterator pointing to the `object\_type` with the lowest primary key value in the Multi-Index table.


**Returns:**

An iterator pointing to the `object\_type` with the lowest primary key value in the Multi-Index table.


Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example below
      // add dan account to table           - see emplace example below
      // add additional account - brendan

      addresses.emplace(payer, [&](auto& address) {
        address.account_name = "brendan"_n;
        address.first_name = "Brendan";
        address.last_name = "Blumer";
        address.street = "1 EOS Way";
        address.city = "Hong Kong";
        address.state = "HK";
      });
      auto itr = addresses.crend();
      itr--;
      eosio::check(itr->account_name == name("brendan"), "Lock arf, Incorrect First Record ");
      itr--;
      eosio::check(itr->account_name == name("dan"), "Lock arf, Incorrect Second Record");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="ga659b2744975d0a54162c44fbcbc28115" href="#ga659b2744975d0a54162c44fbcbc28115">rend</a>

```cpp
const_reverse_iterator multiindex::rend () const
```


Returns an iterator pointing to the `object\_type` with the lowest primary key value in the Multi-Index table.


**Returns:**

An iterator pointing to the `object\_type` with the lowest primary key value in the Multi-Index table.


Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example below
      // add dan account to table           - see emplace example below
      // add additional account - brendan

      addresses.emplace(payer, [&](auto& address) {
        address.account_name = "brendan"_n;
        address.first_name = "Brendan";
        address.last_name = "Blumer";
        address.street = "1 EOS Way";
        address.city = "Hong Kong";
        address.state = "HK";
      });
      auto itr = addresses.rend();
      itr--;
      eosio::check(itr->account_name == name("brendan"), "Lock arf, Incorrect First Record ");
      itr--;
      eosio::check(itr->account_name == name("dan"), "Lock arf, Incorrect Second Record");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="gaa642a184ce729f91bc70200ba2a55253" href="#gaa642a184ce729f91bc70200ba2a55253">lower\_bound</a>

```cpp
const_iterator multiindex::lower_bound (
    uint64_t primary
) const
```


Searches for the `object\_type` with the lowest primary key that is greater than or equal to a given primary key.


**Parameters:**


* **primary** - Primary key that establishes the target value for the lower bound search. 



**Returns:**

An iterator pointing to the `object\_type` that has the lowest primary key that is greater than or equal to `primary`. If an object could not be found, it will return the `end` iterator. If the table does not exist\*\* it will return `-1`.


Example:

```cpp
// This assumes the code from the get_index() example below. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example below
      // add dan account to table           - see emplace example below
      // add additional account - brendan

      addresses.emplace(payer, [&](auto& address) {
        address.account_name = "brendan"_n;
        address.first_name = "Brendan";
        address.last_name = "Blumer";
        address.street = "1 EOS Way";
        address.city = "Hong Kong";
        address.state = "HK";
        address.zip = 93445;
      });
      uint32_t zipnumb = 93445;
      auto zip_index = addresses.get_index<name("zip")>();
      auto itr = zip_index.lower_bound(zipnumb);
      eosio::check(itr->account_name == name("brendan"), "Lock arf, Incorrect First Lower Bound Record ");
      itr++;
      eosio::check(itr->account_name == name("dan"), "Lock arf, Incorrect Second Lower Bound Record");
      itr++;
      eosio::check(itr == zip_index.end(), "Lock arf, Incorrect End of Iterator");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="ga5a9f1b25fd64a2bdb163f97ca97eb371" href="#ga5a9f1b25fd64a2bdb163f97ca97eb371">upper\_bound</a>

```cpp
const_iterator multiindex::upper_bound (
    uint64_t primary
) const
```


Searches for the `object\_type` with the highest primary key that is less than or equal to a given primary key.


**Parameters:**


* **primary** - Primary key that establishes the target value for the upper bound search 



**Returns:**

An iterator pointing to the `object\_type` that has the highest primary key that is less than or equal to `primary`. If an object could not be found, it will return the `end` iterator. If the table does not exist\*\* it will return `-1`.


Example:

```cpp
// This assumes the code from the get_index() example below. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example below
      // add dan account to table           - see emplace example below
      // add additional account - brendan

      addresses.emplace(payer, [&](auto& address) {
        address.account_name = "brendan"_n;
        address.first_name = "Brendan";
        address.last_name = "Blumer";
        address.street = "1 EOS Way";
        address.city = "Hong Kong";
        address.state = "HK";
        address.zip = 93445;
      });
      uint32_t zipnumb = 93445;
      auto zip_index = addresses.get_index<name("zip")>();
      auto itr = zip_index.upper_bound(zipnumb);
      eosio::check(itr->account_name == name("dan"), "Lock arf, Incorrect First Upper Bound Record ");
      itr++;
      eosio::check(itr == zip_index.end(), "Lock arf, Incorrect End of Iterator");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="ga1b2d26324eb34354f5db2abcf2d87853" href="#ga1b2d26324eb34354f5db2abcf2d87853">available\_primary\_key</a>

```cpp
uint64_t multiindex::available_primary_key () const
```


Returns an available primary key.


**Returns:**

An available (unused) primary key value.


Notes: Intended to be used in tables in which the primary keys of the table are strictly intended to be auto-incrementing, and thus will never be set to custom values by the contract. Violating this expectation could result in the table appearing to be full due to inability to allocate an available primary key. Ideally this method would only be used to determine the appropriate primary key to use within new objects added to a table in which the primary keys of the table are strictly intended from the beginning to be autoincrementing and thus will not ever be set to custom arbitrary values by the contract. Violating this agreement could result in the table appearing full when in reality there is plenty of space left.
Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      address_index addresses(_self, _self.value);  // code, scope
      // add to table, first argument is account to bill for storage
      addresses.emplace(payer, [&](auto& address) {
        address.key = addresses.available_primary_key();
        address.first_name = "Daniel";
        address.last_name = "Larimer";
        address.street = "1 EOS Way";
        address.city = "Blacksburg";
        address.state = "VA";
      });
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="ga98fecc3166ebb3746ee810f7f7d9beac" href="#ga98fecc3166ebb3746ee810f7f7d9beac">get\_index</a>

```cpp
auto multiindex::get_index ()
```


Returns an appropriately typed Secondary Index.


**Template parameters:**


* **IndexName** - the ID of the desired secondary index



**Returns:**

An index of the appropriate type: Primitive 64-bit unsigned integer key (idx64), Primitive 128-bit unsigned integer key (idx128), 128-bit fixed-size lexicographical key (idx128), 256-bit fixed-size lexicographical key (idx256), Floating point key, Double precision floating point key, Long Double (quadruple) precision floating point key


Example:

```cpp
#include <eosiolib/eosio.hpp>
using namespace eosio;
using namespace std;
class addressbook: contract {
  struct address {
     uint64_t account_name;
     string first_name;
     string last_name;
     string street;
     string city;
     string state;
     uint32_t zip = 0;
     uint64_t primary_key() const { return account_name; }
     uint64_t by_zip() const { return zip; }
  };
  public:
    addressbook(name receiver, name code, datastream<const char*> ds):contract(receiver, code, ds) {}
    typedef eosio::multi_index< name("address"), address, indexed_by< name("zip"), const_mem_fun<address, uint64_t, &address::by_zip> > address_index;
    void myaction() {
      // create reference to address_index  - see emplace example below
      // add dan account to table           - see emplace example below
      uint32_t zipnumb = 93446;
      auto zip_index = addresses.get_index<name("zip")>();
      auto itr = zip_index.find(zipnumb);
      eosio::check(itr->account_name == name("dan"), "Lock arf, Incorrect Record ");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="gae6e01877b9862c8193df27f05c305f2c" href="#gae6e01877b9862c8193df27f05c305f2c">get\_index</a>

```cpp
auto multiindex::get_index () const
```


Returns an appropriately typed Secondary Index.


**Template parameters:**


* **IndexName** - the ID of the desired secondary index



**Returns:**

An index of the appropriate type: Primitive 64-bit unsigned integer key (idx64), Primitive 128-bit unsigned integer key (idx128), 128-bit fixed-size lexicographical key (idx128), 256-bit fixed-size lexicographical key (idx256), Floating point key, Double precision floating point key, Long Double (quadruple) precision floating point key


Example:

```cpp
// This assumes the code from the get_index() example. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example below
      // add dan account to table           - see emplace example below
      // add additional account - brendan

      addresses.emplace(payer, [&](auto& address) {
        address.account_name = "brendan"_n;
        address.first_name = "Brendan";
        address.last_name = "Blumer";
        address.street = "1 EOS Way";
        address.city = "Hong Kong";
        address.state = "HK";
        address.zip = 93445;
      });
      uint32_t zipnumb = 93445;
      auto zip_index = addresses.get_index<name("zip")>();
      auto itr = zip_index.upper_bound(zipnumb);
      eosio::check(itr->account_name == name("dan"), "Lock arf, Incorrect First Upper Bound Record ");
      itr++;
      eosio::check(itr == zip_index.end(), "Lock arf, Incorrect End of Iterator");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="gad611e3ff51efdf038b934138d071cf83" href="#gad611e3ff51efdf038b934138d071cf83">iterator\_to</a>

```cpp
const_iterator multiindex::iterator_to (
    const T & obj
) const
```


Returns an iterator to the given object in a Multi-Index table.


**Parameters:**


* **obj** - A reference to the desired object



**Returns:**

An iterator to the given object


Example:

```cpp
// This assumes the code from the get_index() example. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example below
      // add dan account to table           - see emplace example below
      // add additional account - brendan

      addresses.emplace(payer, [&](auto& address) {
        address.account_name = "brendan"_n;
        address.first_name = "Brendan";
        address.last_name = "Blumer";
        address.street = "1 EOS Way";
        address.city = "Hong Kong";
        address.state = "HK";
        address.zip = 93445;
      });
      auto user = addresses.get("dan"_n);
      auto itr = address.find("dan"_n);
      eosio::check(iterator_to(user) == itr, "Invalid iterator");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="gab64fbf4dd04be357ec0cbbf125a3da5e" href="#gab64fbf4dd04be357ec0cbbf125a3da5e">emplace</a>

```cpp
const_iterator multiindex::emplace (
    name payer,
    Lambda && constructor
)
```


Adds a new object (i.e., row) to the table.


**Parameters:**


* **payer** - Account name of the payer for the Storage usage of the new object 
* **constructor** - Lambda function that does an in-place initialization of the object to be created in the table



**Precondition:**

A multi index table has been instantiated 




**Post**

A new object is created in the Multi-Index table, with a unique primary key (as specified in the object). The object is serialized and written to the table. If the table does not exist, it is created. 




**Post**

Secondary indices are updated to refer to the newly added object. If the secondary index tables do not exist, they are created. 




**Post**

The payer is charged for the storage usage of the new object and, if the table (and secondary index tables) must be created, for the overhead of the table creation.




**Returns:**

A primary key iterator to the newly created object


Exception - The account is not authorized to write to the table.
Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      address_index addresses(_self, _self.value); // code, scope
      // add to table, first argument is account to bill for storage
      addresses.emplace(_self, [&](auto& address) {
        address.account_name = "dan"_n;
        address.first_name = "Daniel";
        address.last_name = "Larimer";
        address.street = "1 EOS Way";
        address.city = "Blacksburg";
        address.state = "VA";
      });
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="ga4b3556ef69c7faa917f185ae33a34442" href="#ga4b3556ef69c7faa917f185ae33a34442">modify</a>

```cpp
void multiindex::modify (
    const_iterator itr,
    name payer,
    Lambda && updater
)
```


Modifies an existing object in a table.


**Parameters:**


* **itr** - an iterator pointing to the object to be updated 
* **payer** - account name of the payer for the Storage usage of the updated row 
* **updater** - lambda function that updates the target object



**Precondition:**

itr points to an existing element 




**Precondition:**

payer is a valid account that is authorized to execute the action and be billed for storage usage.




**Post**

The modified object is serialized, then replaces the existing object in the table. 




**Post**

Secondary indices are updated; the primary key of the updated object is not changed. 




**Post**

The payer is charged for the storage usage of the updated object. 




**Post**

If payer is the same as the existing payer, payer only pays for the usage difference between existing and updated object (and is refunded if this difference is negative). 




**Post**

If payer is different from the existing payer, the existing payer is refunded for the storage usage of the existing object.


Exceptions: If called with an invalid precondition, execution is aborted.
Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example
      // add dan account to table           - see emplace example

      auto itr = addresses.find("dan"_n);
      eosio::check(itr != addresses.end(), "Address for account not found");
      addresses.modify( itr, account payer, [&]( auto& address ) {
        address.city = "San Luis Obispo";
        address.state = "CA";
      });
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="gab44fb8b993970f1b3b7ac5f37cd2d2c9" href="#gab44fb8b993970f1b3b7ac5f37cd2d2c9">modify</a>

```cpp
void multiindex::modify (
    const T & obj,
    name payer,
    Lambda && updater
)
```


Modifies an existing object in a table.


**Parameters:**


* **obj** - a reference to the object to be updated 
* **payer** - account name of the payer for the Storage usage of the updated row 
* **updater** - lambda function that updates the target object



**Precondition:**

obj is an existing object in the table 




**Precondition:**

payer is a valid account that is authorized to execute the action and be billed for storage usage.




**Post**

The modified object is serialized, then replaces the existing object in the table. 




**Post**

Secondary indices are updated; the primary key of the updated object is not changed. 




**Post**

The payer is charged for the storage usage of the updated object. 




**Post**

If payer is the same as the existing payer, payer only pays for the usage difference between existing and updated object (and is refunded if this difference is negative). 




**Post**

If payer is different from the existing payer, the existing payer is refunded for the storage usage of the existing object.


Exceptions: If called with an invalid precondition, execution is aborted.
Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example
      // add dan account to table           - see emplace example

      auto itr = addresses.find("dan"_n);
      eosio::check(itr != addresses.end(), "Address for account not found");
      addresses.modify( *itr, payer, [&]( auto& address ) {
        address.city = "San Luis Obispo";
        address.state = "CA";
      });
      eosio::check(itr->city == "San Luis Obispo", "Lock arf, Address not modified");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="gaf05dfe7b56cf37179f76632cf619f0d1" href="#gaf05dfe7b56cf37179f76632cf619f0d1">get</a>

```cpp
const T & multiindex::get (
    uint64_t primary,
    const char * error_msg = "unable to find key"
) const
```


Retrieves an existing object from a table using its primary key.


**Parameters:**


* **primary** - Primary key value of the object 



**Returns:**

A constant reference to the object containing the specified primary key.


Exception - No object matches the given key
Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example
      // add dan account to table           - see emplace example

      auto user = addresses.get("dan"_n);
      eosio::check(user.first_name == "Daniel", "Couldn't get him.");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="ga40a65cdfcc298b85e0e4ddf4c3581c1c" href="#ga40a65cdfcc298b85e0e4ddf4c3581c1c">find</a>

```cpp
const_iterator multiindex::find (
    uint64_t primary
) const
```


Search for an existing object in a table using its primary key.


**Parameters:**


* **primary** - Primary key value of the object 



**Returns:**

An iterator to the found object which has a primary key equal to `primary` OR the `end` iterator of the referenced table if an object with primary key `primary` is not found.


Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example
      // add dan account to table           - see emplace example

      auto itr = addresses.find("dan"_n);
      eosio::check(itr != addresses.end(), "Couldn't get him.");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

### function <a id="ga8a65dee974002fd6324e72a0a978fddf" href="#ga8a65dee974002fd6324e72a0a978fddf">require\_find</a>

```cpp
const_iterator multiindex::require_find (
    uint64_t primary,
    const char * error_msg = "unable to find key"
) const
```


Search for an existing object in a table using its primary key.


**Parameters:**


* **primary** - Primary key value of the object 
* **error\_msg** - error message if an object with primary key `primary` is not found. 



**Returns:**

An iterator to the found object which has a primary key equal to `primary` OR throws an exception if an object with primary key `primary` is not found. 




### function <a id="gad28ac8d91e9af22cbbc12962a805d253" href="#gad28ac8d91e9af22cbbc12962a805d253">erase</a>

```cpp
const_iterator multiindex::erase (
    const_iterator itr
)
```


Remove an existing object from a table using its primary key.


**Parameters:**


* **itr** - An iterator pointing to the object to be removed



**Precondition:**

itr points to an existing element 




**Post**

The object is removed from the table and all associated storage is reclaimed. 




**Post**

Secondary indices associated with the table are updated. 




**Post**

The existing payer for storage usage of the object is refunded for the table and secondary indices usage of the removed object, and if the table and indices are removed, for the associated overhead.




**Returns:**

For the signature with ``, returns a pointer to the object following the removed object.


Exceptions: The object to be removed is not in the table. The action is not authorized to modify the table. The given iterator is invalid.
Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      // create reference to address_index  - see emplace example
      // add dan account to table           - see emplace example

      auto itr = addresses.find("dan"_n);
      eosio::check(itr != addresses.end(), "Address for account not found");
      addresses.erase( itr );
      eosio::check(itr != addresses.end(), "Everting lock arf, Address not erased properly");
    }
}
EOSIO_ABI( addressbook, (myaction) )
```

 

### function <a id="gac5f84064eacb4265ad44f15cecebb4be" href="#gac5f84064eacb4265ad44f15cecebb4be">erase</a>

```cpp
void multiindex::erase (
    const T & obj
)
```


Remove an existing object from a table using its primary key.


**Parameters:**


* **obj** - Object to be removed



**Precondition:**

obj is an existing object in the table 




**Post**

The object is removed from the table and all associated storage is reclaimed. 




**Post**

Secondary indices associated with the table are updated. 




**Post**

The existing payer for storage usage of the object is refunded for the table and secondary indices usage of the removed object, and if the table and indices are removed, for the associated overhead.


Exceptions: The object to be removed is not in the table. The action is not authorized to modify the table. The given iterator is invalid.
Example:

```cpp
// This assumes the code from the constructor example. Replace myaction() {...}

    void myaction() {
      auto itr = addresses.find("dan"_n);
      eosio::check(itr != addresses.end(), "Record is not found");
      addresses.erase(*itr);
      itr = addresses.find("dan"_n);
      eosio::check(itr == addresses.end(), "Record is not deleted");
    }
}
EOSIO_DISPATCH( addressbook, (myaction) )
```

 

