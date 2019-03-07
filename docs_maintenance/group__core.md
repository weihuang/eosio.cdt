---
search:
    keywords: ['core', 'dispatch', 'execute_action', 'EOSIO_DISPATCH']
---

# group core

C++ Core API for chain-agnostic smart-contract functionality. 
## Modules

* [**Asset**](group__asset.md) Defines C++ API for managing assets. 
* [**Binary Extension**](group__binary__extension.md) Container to hold a binary payload for an extension. 
* [**System**](group__system.md) Defines wrappers over eosio\_assert. 
* [**Public Key Type**](group__publickeytype.md) Specifies public key type. 
* [**Signature**](group__signature.md) Specifies signature type. 
* [**Crypto**](group__crypto.md) Defines API for calculating and checking hashes. 
* [**Data Stream**](group__datastream.md) Defines data stream for reading and writing data in the form of bytes. 
* [**Fixed Size Byte Array**](group__fixed__bytes.md) Fixed size array of bytes sorted lexicographically. 
* [**Ignore**](group__ignore.md) Enables telling the datastream to ignore this type, but allowing abi generator to add the correct type. 
* [**Name**](group__name.md) EOSIO Name Type. 
* [**Console**](group__console.md) Defines C++ wrapper to log/print text messages. 
* [**Serialize**](group__serialize.md) Defines C++ API to serialize and deserialize object. 
* [**Symbol**](group__symbol.md) Defines C++ API for managing symbols. 
* [**Time**](group__time.md) Classes for working with time. 
* [**Variable Length Integer Type**](group__varint.md) Defines variable length integer type which provides more efficient serialization. 
* [**Action**](group__action.md) Defines type-safe C++ wrapers for querying action and sending action. 
* [**Dispatcher**](group__dispatcher.md) Defines C++ functions to dispatch action to proper action handler inside a contract. 


## Defines

## Functions Documentation

### function <a id="ga289285490058d17de4a6a052b52dd680" href="#ga289285490058d17de4a6a052b52dd680">dispatch</a>

```cpp
bool core::dispatch (
    uint64_t code,
    uint64_t act
)
```


This method will dynamically dispatch an incoming set of actions to

```cpp
static Contract::on( ActionType )
```


For this to work the Actions must be derived from **[eosio::contract](classeosio_1_1contract.md)** 

### function <a id="ga8c4928c29096799ef6ddabf148dc9cf9" href="#ga8c4928c29096799ef6ddabf148dc9cf9">execute\_action</a>

```cpp
bool core::execute_action (
    name self,
    name code,
    void(T::*)(Args...) func
)
```


Unpack the received action and execute the correponding action handler


**Template parameters:**


* **T** - The contract class that has the correponding action handler, this contract should be derived from **[eosio::contract](classeosio_1_1contract.md)** 
* **Q** - The namespace of the action handler function 
* **Args** - The arguments that the action handler accepts, i.e. members of the action 



**Parameters:**


* **obj** - The contract object that has the correponding action handler 
* **func** - The action handler 



**Returns:**

true 




## Defines Documentation

### define <a id="ga4c40fe6c9aa739424885e20ed613e545" href="#ga4c40fe6c9aa739424885e20ed613e545">EOSIO\_DISPATCH</a>

```cpp
define EOSIO_DISPATCH;
```


Convenient macro to create contract apply handler


**Note:**

To be able to use this macro, the contract needs to be derived from **[eosio::contract](classeosio_1_1contract.md)** 




**Parameters:**


* **TYPE** - The class name of the contract 
* **MEMBERS** - The sequence of available actions supported by this contract

Example: 
```cpp
EOSIO_DISPATCH( eosio::bios, (setpriv)(setalimits)(setglimits)(setprods)(reqauth) )
```

 

