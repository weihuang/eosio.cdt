---
search:
    keywords: ['eosio::contract', '_self', '_code', '_ds', '_first_receiver', 'contract', 'get_self', 'get_code', 'get_datastream', 'contract', 'get_self', 'get_code', 'get_first_receiver', 'get_datastream']
---

# class eosio::contract

[**Class List**](annotated.md) **>** [**eosio**](namespaceeosio.md) **::** [**contract**](classeosio_1_1contract.md)


Base class for EOSIO contract. [More...](#detailed-description)
## Protected Attributes

|Type|Name|
|-----|-----|
|**[name](structeosio_1_1name.md)**|[**\_self**](group__contract_ga29c0c98c72ab578a5965d13b00dca0c0.md#ga29c0c98c72ab578a5965d13b00dca0c0)|
|**[name](structeosio_1_1name.md)**|[**\_code**](group__contract_ga7bcf83f433ecb0b305dfd7d217c2dde8.md#ga7bcf83f433ecb0b305dfd7d217c2dde8)|
|**[datastream](classeosio_1_1datastream.md)**< const char \* >|[**\_ds**](group__contract_ga0515c65ff4f3720dfbd7d06cb01323e0.md#ga0515c65ff4f3720dfbd7d06cb01323e0)|
|**[name](structeosio_1_1name.md)**|[**\_first\_receiver**](classeosio_1_1contract_a98397119d8b0cf44f22a62967f8d030a.md#1a98397119d8b0cf44f22a62967f8d030a)|


## Public Functions

|Type|Name|
|-----|-----|
||[**contract**](group__contract_ga592e8ee6dabf85e272cc0a833c3fe453.md#ga592e8ee6dabf85e272cc0a833c3fe453) (**[name](structeosio_1_1name.md)** receiver, **[name](structeosio_1_1name.md)** code, **[datastream](classeosio_1_1datastream.md)**< const char \*> ds) |
|**[name](structeosio_1_1name.md)**|[**get\_self**](group__contract_ga7564cad9be4ee5dcaac832511d9a0e05.md#ga7564cad9be4ee5dcaac832511d9a0e05) () const |
|**[name](structeosio_1_1name.md)**|[**get\_code**](group__contract_ga4efcd5638d26dad3e5dc075bad152d45.md#ga4efcd5638d26dad3e5dc075bad152d45) () const |
|**[datastream](classeosio_1_1datastream.md)**< const char \* >|[**get\_datastream**](group__contract_ga3bb1107c2675ef69f3eca8e3793701c7.md#ga3bb1107c2675ef69f3eca8e3793701c7) () const |
||[**contract**](classeosio_1_1contract_a95036ce389006005cff9fffa422ee911.md#1a95036ce389006005cff9fffa422ee911) (**[name](structeosio_1_1name.md)** self, **[name](structeosio_1_1name.md)** first\_receiver, **[datastream](classeosio_1_1datastream.md)**< const char \*> ds) |
|**[name](structeosio_1_1name.md)**|[**get\_self**](classeosio_1_1contract_a7564cad9be4ee5dcaac832511d9a0e05.md#1a7564cad9be4ee5dcaac832511d9a0e05) () const |
|**[name](structeosio_1_1name.md)**|[**get\_code**](classeosio_1_1contract_a4efcd5638d26dad3e5dc075bad152d45.md#1a4efcd5638d26dad3e5dc075bad152d45) () const |
|**[name](structeosio_1_1name.md)**|[**get\_first\_receiver**](classeosio_1_1contract_ac7c14f66e3d41904264d1c6558cf370b.md#1ac7c14f66e3d41904264d1c6558cf370b) () const |
|**[datastream](classeosio_1_1datastream.md)**< const char \* >|[**get\_datastream**](classeosio_1_1contract_a3bb1107c2675ef69f3eca8e3793701c7.md#1a3bb1107c2675ef69f3eca8e3793701c7) () const |


## Detailed Description

Base class for EOSIO contract. A new contract should derive from this class, so it can make use of EOSIO\_ABI macro.
Base class for EOSIO contract.
Base class for EOSIO contract. A new contract should derive from this class, so it can make use of EOSIO\_ABI macro. 
## Protected Attributes Documentation

### variable <a id="ga29c0c98c72ab578a5965d13b00dca0c0" href="#ga29c0c98c72ab578a5965d13b00dca0c0">\_self</a>

```cpp
name eosio::contract::_self;
```


The name of this contract
The name of the account this contract is deployed on. 

### variable <a id="ga7bcf83f433ecb0b305dfd7d217c2dde8" href="#ga7bcf83f433ecb0b305dfd7d217c2dde8">\_code</a>

```cpp
name eosio::contract::_code;
```


The code name of the action this contract is processing. 

### variable <a id="ga0515c65ff4f3720dfbd7d06cb01323e0" href="#ga0515c65ff4f3720dfbd7d06cb01323e0">\_ds</a>

```cpp
datastream< const char * > eosio::contract::_ds;
```


The datastream for this contract 

### variable <a id="1a98397119d8b0cf44f22a62967f8d030a" href="#1a98397119d8b0cf44f22a62967f8d030a">\_first\_receiver</a>

```cpp
name eosio::contract::_first_receiver;
```


The account the incoming action was first received at. 

## Public Functions Documentation

### function <a id="ga592e8ee6dabf85e272cc0a833c3fe453" href="#ga592e8ee6dabf85e272cc0a833c3fe453">contract</a>

```cpp
eosio::contract::contract (
    name receiver,
    name code,
    datastream< const char *> ds
)
```


Construct a new contract given the contract name


**Parameters:**


* **receiver** - The name of this contract 
* **code** - The code name of the action this contract is processing. 
* **ds** - The datastream used 



### function <a id="ga7564cad9be4ee5dcaac832511d9a0e05" href="#ga7564cad9be4ee5dcaac832511d9a0e05">get\_self</a>

```cpp
name eosio::contract::get_self () const
```


Get this contract name


**Returns:**

name - The name of this contract 




### function <a id="ga4efcd5638d26dad3e5dc075bad152d45" href="#ga4efcd5638d26dad3e5dc075bad152d45">get\_code</a>

```cpp
name eosio::contract::get_code () const
```


The code name of the action this contract is processing.


**Returns:**

name - The code name of the action this contract is processing. 




### function <a id="ga3bb1107c2675ef69f3eca8e3793701c7" href="#ga3bb1107c2675ef69f3eca8e3793701c7">get\_datastream</a>

```cpp
datastream< const char * > eosio::contract::get_datastream () const
```


Get the datastream for this contract


**Returns:**

datastream<const char\*> - The datastream for this contract 




### function <a id="1a95036ce389006005cff9fffa422ee911" href="#1a95036ce389006005cff9fffa422ee911">contract (2/2)</a>

```cpp
eosio::contract::contract (
    name self,
    name first_receiver,
    datastream< const char *> ds
)
```


Construct a new contract given the contract name


**Parameters:**


* **self** - The name of the account this contract is deployed on 
* **first\_receiver** - The account the incoming action was first received at. 
* **ds** - The datastream used 



### function <a id="1a7564cad9be4ee5dcaac832511d9a0e05" href="#1a7564cad9be4ee5dcaac832511d9a0e05">get\_self (2/2)</a>

```cpp
name eosio::contract::get_self () const
```


Get this contract name


**Returns:**

name - The name of this contract 




### function <a id="1a4efcd5638d26dad3e5dc075bad152d45" href="#1a4efcd5638d26dad3e5dc075bad152d45">get\_code (2/2)</a>

```cpp
name eosio::contract::get_code () const
```


The first\_receiver name of the action this contract is processing.


**Returns:**

name - The first\_receiver name of the action this contract is processing. 




### function <a id="1ac7c14f66e3d41904264d1c6558cf370b" href="#1ac7c14f66e3d41904264d1c6558cf370b">get\_first\_receiver</a>

```cpp
name eosio::contract::get_first_receiver () const
```


The account the incoming action was first received at.


**Returns:**

name - The first\_receiver name of the action this contract is processing. 




### function <a id="1a3bb1107c2675ef69f3eca8e3793701c7" href="#1a3bb1107c2675ef69f3eca8e3793701c7">get\_datastream (2/2)</a>

```cpp
datastream< const char * > eosio::contract::get_datastream () const
```


Get the datastream for this contract


**Returns:**

datastream<const char\*> - The datastream for this contract 






----------------------------------------
The documentation for this class was generated from the following file: `in/eosio.cdt/libraries/eosiolib/contract.hpp`
