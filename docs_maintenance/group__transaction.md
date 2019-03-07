---
search:
    keywords: ['transaction', 'eosio::transaction_header', 'eosio::transaction', 'eosio::onerror', 'extension', 'extensions_type', 'expiration', 'ref_block_num', 'ref_block_prefix', 'max_net_usage_words', 'max_cpu_usage_ms', 'delay_sec', 'context_free_actions', 'actions', 'transaction_extensions', 'sender_id', 'sent_trx', 'from_current_action', 'send_deferred', 'get_action', 'read_transaction', 'cancel_deferred', 'transaction_size', 'tapos_block_num', 'tapos_block_prefix', 'expiration', 'get_context_free_data', 'transaction_header', 'transaction', 'send', 'unpack_sent_trx']
---

# group transaction

Type-safe C++ wrappers for transaction C API. [More...](#detailed-description)
## Classes

|Type|Name|
|-----|-----|
|class|[**eosio::transaction\_header**](classeosio_1_1transaction__header.md)|
|class|[**eosio::transaction**](classeosio_1_1transaction.md)|
|struct|[**eosio::onerror**](structeosio_1_1onerror.md)|


## Variables

## Detailed Description

An inline message allows one contract to send another contract a message which is processed immediately after the current message's processing ends such that the success or failure of the parent transaction is dependent on the success of the message. If an inline message fails in processing then the whole tree of transactions and actions rooted in the block will me marked as failing and none of effects on the database will persist.
Inline actions and Deferred transactions must adhere to the permissions available to the parent transaction or, in the future, delegated to the contract account for future use.


**Note:**

There are some methods from the transactioncapi that can be used directly from C++ 



## Typedefs Documentation

### typedef <a id="gacc6e79e8f9a2290cd72f391f9155b294" href="#gacc6e79e8f9a2290cd72f391f9155b294">extension</a>

```cpp
typedef std::tuple< uint16_t, std::vector< char > > eosio::extension;
```



### typedef <a id="gad28a3e0d3a3eef98325a97e9633d9806" href="#gad28a3e0d3a3eef98325a97e9633d9806">extensions\_type</a>

```cpp
typedef std::vector< extension > eosio::extensions_type;
```



## Variables Documentation

### variable <a id="ga32a532f21d5a5eeadd892723d9171e05" href="#ga32a532f21d5a5eeadd892723d9171e05">expiration</a>

```cpp
time_point_sec eosio::transaction_header::expiration;
```



### variable <a id="ga7bd1f446f3a9a212183787d223d89766" href="#ga7bd1f446f3a9a212183787d223d89766">ref\_block\_num</a>

```cpp
uint16_t eosio::transaction_header::ref_block_num;
```



### variable <a id="gaed4b528cd8a73ac9fa9cb5b7c429f90c" href="#gaed4b528cd8a73ac9fa9cb5b7c429f90c">ref\_block\_prefix</a>

```cpp
uint32_t eosio::transaction_header::ref_block_prefix;
```



### variable <a id="gaad5eeaa9d26473ae8faa0d9c5cf44c0e" href="#gaad5eeaa9d26473ae8faa0d9c5cf44c0e">max\_net\_usage\_words</a>

```cpp
unsigned_int eosio::transaction_header::max_net_usage_words;
```



### variable <a id="ga5fbc5f8eef0093ad65598953156d4359" href="#ga5fbc5f8eef0093ad65598953156d4359">max\_cpu\_usage\_ms</a>

```cpp
uint8_t eosio::transaction_header::max_cpu_usage_ms;
```

number of 8 byte words this transaction can serialize into after compressions 


### variable <a id="gadbe5ee5f38a82db68162188c49d62f39" href="#gadbe5ee5f38a82db68162188c49d62f39">delay\_sec</a>

```cpp
unsigned_int eosio::transaction_header::delay_sec;
```

number of CPU usage units to bill transaction for 


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



### variable <a id="gae6686bc621795ad87f257d0be72f345c" href="#gae6686bc621795ad87f257d0be72f345c">sender\_id</a>

```cpp
uint128_t eosio::onerror::sender_id;
```



### variable <a id="ga47c98c3801ccb54d4dc964c7d5c86ba1" href="#ga47c98c3801ccb54d4dc964c7d5c86ba1">sent\_trx</a>

```cpp
std::vector< char > eosio::onerror::sent_trx;
```



## Functions Documentation

### function <a id="gabdf7bc0ef45beae2daf8cf3f08a7cd42" href="#gabdf7bc0ef45beae2daf8cf3f08a7cd42">from\_current\_action</a>

```cpp
static onerror transaction::from_current_action ()
```


from\_current\_action unpacks and returns a onerror struct 

### function <a id="ga92cd86171a4bcc86bb3bc974618005e5" href="#ga92cd86171a4bcc86bb3bc974618005e5">send\_deferred</a>

```cpp
void transaction::send_deferred (
    const uint128_t & sender_id,
    name payer,
    const char * serialized_transaction,
    size_t size,
    bool replace = false
)
```


Send a deferred transaction


**Parameters:**


* **sender\_id** - Account name of the sender of this deferred transaction 
* **payer** - Account name responsible for paying the RAM for this deferred transaction 
* **serialized\_transaction** - The packed transaction to be deferred 
* **size** - The size of the packed transaction, required for persistence. 
* **replace** - If true, will replace an existing transaction. 



### function <a id="gac01a00482f2dc95bf4850b2e8213ee90" href="#gac01a00482f2dc95bf4850b2e8213ee90">get\_action</a>

```cpp
action transaction::get_action (
    uint32_t type,
    uint32_t index
)
```


Retrieve the indicated action from the active transaction.


**Parameters:**


* **type** - 0 for context free action, 1 for action 
* **index** - the index of the requested action 



**Returns:**

the indicated action 




### function <a id="ga47f5ea185e11cab47e2bddd08598375f" href="#ga47f5ea185e11cab47e2bddd08598375f">read\_transaction</a>

```cpp
size_t transaction::read_transaction (
    char * ptr,
    size_t sz
)
```


Access a copy of the currently executing transaction.


**Returns:**

the currently executing transaction 




### function <a id="ga78a95bee813140ef77b2b8641c472cfa" href="#ga78a95bee813140ef77b2b8641c472cfa">cancel\_deferred</a>

```cpp
int transaction::cancel_deferred (
    const uint128_t & sender_id
)
```


Cancels a deferred transaction.


**Parameters:**


* **sender\_id** - The id of the sender



**Precondition:**

The deferred transaction ID exists. 




**Precondition:**

The deferred transaction ID has not yet been published. 




**Post**

Deferred transaction canceled.




**Returns:**

1 if transaction was canceled, 0 if transaction was not found


Example:

```cpp
id = 0xffffffffffffffff
cancel_deferred( id );
```

 

### function <a id="ga44eb86f3c4e862cbb5c862f29b77aa1f" href="#ga44eb86f3c4e862cbb5c862f29b77aa1f">transaction\_size</a>

```cpp
size_t transaction::transaction_size ()
```


Gets the size of the currently executing transaction.


**Returns:**

size of the currently executing transaction 




### function <a id="gad2a14b4c7ce6445f669a42ef73a4b685" href="#gad2a14b4c7ce6445f669a42ef73a4b685">tapos\_block\_num</a>

```cpp
int transaction::tapos_block_num ()
```


Gets the block number used for TAPOS on the currently executing transaction.


**Returns:**

block number used for TAPOS on the currently executing transaction Example: 
```cpp
int tbn = tapos_block_num();
```

 




### function <a id="ga8ebcde8a1e1665142ca0b51e4118ed17" href="#ga8ebcde8a1e1665142ca0b51e4118ed17">tapos\_block\_prefix</a>

```cpp
int transaction::tapos_block_prefix ()
```


Gets the block prefix used for TAPOS on the currently executing transaction.


**Returns:**

block prefix used for TAPOS on the currently executing transaction Example: 
```cpp
int tbp = tapos_block_prefix();
```

 




### function <a id="gaf1dda66d94fcc04a2b5fa7a8bffd75b0" href="#gaf1dda66d94fcc04a2b5fa7a8bffd75b0">expiration</a>

```cpp
uint32_t transaction::expiration ()
```

Gets the expiration of the currently executing transaction. 

Gets the expiration of the currently executing transaction.


**Returns:**

expiration of the currently executing transaction in seconds since Unix epoch 




### function <a id="ga0a8affaada54b4a722e819c9da056211" href="#ga0a8affaada54b4a722e819c9da056211">get\_context\_free\_data</a>

```cpp
int transaction::get_context_free_data (
    uint32_t index,
    char * buff,
    size_t size
)
```


Retrieve the signed\_transaction.context\_free\_data[index].


**Parameters:**


* **index** - the index of the context\_free\_data entry to retrieve 
* **buff** - output buff of the context\_free\_data entry 
* **size** - amount of context\_free\_data[index] to retrieve into buff, 0 to report required size 



**Returns:**

size copied, or context\_free\_data[index].**[size()](namespaceeosio_1_1internal__use__do__not__use_a40f68c0fdc4874d206da23b1feccba91.md#1a40f68c0fdc4874d206da23b1feccba91)** if 0 passed for size, or -1 if index not valid 




### function <a id="ga27106464af5cbbfd09b223eeb48d1e37" href="#ga27106464af5cbbfd09b223eeb48d1e37">transaction\_header</a>

```cpp
transaction::transaction_header (
    time_point_sec exp = time_point_sec(now()+60)
)
```

Construct a new **[transaction\_header](classeosio_1_1transaction__header.md)** object initialising the transaction header expiration to now + 60 seconds. 

Construct a new **[transaction\_header](classeosio_1_1transaction__header.md)** with an expiration of now + 60 seconds. 

### function <a id="gad090d569f520dce4919de93bcec2e260" href="#gad090d569f520dce4919de93bcec2e260">transaction</a>

```cpp
transaction::transaction (
    time_point_sec exp = time_point_sec(now()+60)
)
```

Construct a new transaction object initialising the transaction header expiration to now + 60 seconds. 

Construct a new transaction with an expiration of now + 60 seconds. 

### function <a id="gaff16436e52fff284fabc0b748be342b4" href="#gaff16436e52fff284fabc0b748be342b4">send</a>

```cpp
void transaction::send (
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



### function <a id="ga8fe8368f7a3213b5ab0a93407f41cd66" href="#ga8fe8368f7a3213b5ab0a93407f41cd66">unpack\_sent\_trx</a>

```cpp
transaction transaction::unpack_sent_trx () const
```

Unpacks and returns a transaction. 

unpack\_sent\_trx unpacks and returns a transaction 

