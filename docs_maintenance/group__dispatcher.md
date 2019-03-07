---
search:
    keywords: ['dispatcher', 'dispatch', 'execute_action', 'EOSIO_DISPATCH']
---

# group dispatcher

Defines C++ functions to dispatch action to proper action handler inside a contract. [More...](#detailed-description)
## Defines

## Detailed Description

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

 
## Functions Documentation

### function <a id="ga289285490058d17de4a6a052b52dd680" href="#ga289285490058d17de4a6a052b52dd680">dispatch</a>

```cpp
bool dispatcher::dispatch (
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
bool dispatcher::execute_action (
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

 

