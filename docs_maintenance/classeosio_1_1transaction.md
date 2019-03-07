---
search:
    keywords: ['eosio::transaction', 'context_free_actions', 'actions', 'transaction_extensions', 'transaction', 'send', 'transaction', 'send']
---

# class eosio::transaction

[**Class List**](annotated.md) **>** [**eosio**](namespaceeosio.md) **::** [**transaction**](classeosio_1_1transaction.md)


Contains the actions, context\_free\_actions and extensions type for a transaction. [More...](#detailed-description)


Inherits the following classes: **[eosio::transaction\_header](classeosio_1_1transaction__header.md)**, **[eosio::transaction\_header](classeosio_1_1transaction__header.md)**

## Public Attributes

|Type|Name|
|-----|-----|
|std::vector< **[action](structeosio_1_1action.md)** >|[**context\_free\_actions**](group__transaction_gaa9b126749acac9b06fd35bb52bc2adcf.md#gaa9b126749acac9b06fd35bb52bc2adcf)|
|std::vector< **[action](structeosio_1_1action.md)** >|[**actions**](group__transaction_gafa4ca743d722156d3fd76a902e839b92.md#gafa4ca743d722156d3fd76a902e839b92)|
|**[extensions\_type](group__transaction_gad28a3e0d3a3eef98325a97e9633d9806.md#gad28a3e0d3a3eef98325a97e9633d9806)**|[**transaction\_extensions**](group__transaction_ga445fd87e3465a1ca647c711c1ac0c711.md#ga445fd87e3465a1ca647c711c1ac0c711)|


## Public Functions

|Type|Name|
|-----|-----|
||[**transaction**](classeosio_1_1transaction_aa1c104e5e613662ae3d5c6f66313b352.md#1aa1c104e5e613662ae3d5c6f66313b352) (**[time\_point\_sec](classeosio_1_1time__point__sec.md)** exp = **[time\_point\_sec](classeosio_1_1time__point__sec.md)**(**[current\_time\_point](group__system_gad5f4701ab1b418fe1f1558e199047e35.md#gad5f4701ab1b418fe1f1558e199047e35)**())+60) |
|void|[**send**](classeosio_1_1transaction_aff16436e52fff284fabc0b748be342b4.md#1aff16436e52fff284fabc0b748be342b4) (const uint128\_t & sender\_id, **[name](structeosio_1_1name.md)** payer, bool replace\_existing = false) const |
||[**transaction**](group__transaction_gad090d569f520dce4919de93bcec2e260.md#gad090d569f520dce4919de93bcec2e260) (**[time\_point\_sec](classeosio_1_1time__point__sec.md)** exp = **[time\_point\_sec](classeosio_1_1time__point__sec.md)**(now()+60)) <br>Construct a new transaction object initialising the transaction header expiration to now + 60 seconds. |
|void|[**send**](group__transaction_gaff16436e52fff284fabc0b748be342b4.md#gaff16436e52fff284fabc0b748be342b4) (const uint128\_t & sender\_id, **[name](structeosio_1_1name.md)** payer, bool replace\_existing = false) const <br>Writes the **[symbol\_code](classeosio_1_1symbol__code.md)** as a string to the provided char buffer. |


## Detailed Description

Class transaction contains the actions, context\_free\_actions and extensions type for a transaction 
## Public Attributes Documentation

### variable <a id="gaa9b126749acac9b06fd35bb52bc2adcf" href="#gaa9b126749acac9b06fd35bb52bc2adcf">context\_free\_actions</a>

```cpp
std::vector< action > eosio::transaction::context_free_actions;
```



### variable <a id="gafa4ca743d722156d3fd76a902e839b92" href="#gafa4ca743d722156d3fd76a902e839b92">actions</a>

```cpp
std::vector< action > eosio::transaction::actions;
```



### variable <a id="ga445fd87e3465a1ca647c711c1ac0c711" href="#ga445fd87e3465a1ca647c711c1ac0c711">transaction\_extensions</a>

```cpp
extensions_type eosio::transaction::transaction_extensions;
```



## Public Functions Documentation

### function <a id="1aa1c104e5e613662ae3d5c6f66313b352" href="#1aa1c104e5e613662ae3d5c6f66313b352">transaction (1/2)</a>

```cpp
eosio::transaction::transaction (
    time_point_sec exp = time_point_sec(current_time_point())+60
)
```


Construct a new transaction with an expiration of now + 60 seconds. 

### function <a id="1aff16436e52fff284fabc0b748be342b4" href="#1aff16436e52fff284fabc0b748be342b4">send (1/2)</a>

```cpp
void eosio::transaction::send (
    const uint128_t & sender_id,
    name payer,
    bool replace_existing = false
) const
```


Sends this transaction, packs the transaction then sends it as a deferred transaction
Writes the **[symbol\_code](classeosio_1_1symbol__code.md)** as a string to the provided char buffer 

**Parameters:**


* **sender\_id** - ID of sender 
* **payer** - Account paying for RAM 
* **replace\_existing** - Defaults to false, if this is `0`/false then if the provided sender\_id is already in use by an in-flight transaction from this contract, which will be a failing assert. If `1` then transaction will atomically cancel/replace the inflight transaction 



### function <a id="gad090d569f520dce4919de93bcec2e260" href="#gad090d569f520dce4919de93bcec2e260">transaction (2/2)</a>

```cpp
eosio::transaction::transaction (
    time_point_sec exp = time_point_sec(now()+60)
)
```

Construct a new transaction object initialising the transaction header expiration to now + 60 seconds. 

Construct a new transaction with an expiration of now + 60 seconds. 

### function <a id="gaff16436e52fff284fabc0b748be342b4" href="#gaff16436e52fff284fabc0b748be342b4">send (2/2)</a>

```cpp
void eosio::transaction::send (
    const uint128_t & sender_id,
    name payer,
    bool replace_existing = false
) const
```

Writes the **[symbol\_code](classeosio_1_1symbol__code.md)** as a string to the provided char buffer. 

Sends this transaction, packs the transaction then sends it as a deferred transaction


**Parameters:**


* **sender\_id** - ID of sender 
* **payer** - Account paying for RAM 
* **replace\_existing** - Defaults to false, if this is `0`/false then if the provided sender\_id is already in use by an in-flight transaction from this contract, which will be a failing assert. If `1` then transaction will atomically cancel/replace the inflight transaction 





----------------------------------------
The documentation for this class was generated from the following file: `in/eosio.cdt/libraries/eosiolib/contracts/eosio/transaction.hpp`
