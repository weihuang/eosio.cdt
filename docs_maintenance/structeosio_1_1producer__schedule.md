---
search:
    keywords: ['eosio::producer_schedule', 'version', 'producers']
---

# struct eosio::producer\_schedule

[**Class List**](annotated.md) **>** [**eosio**](namespaceeosio.md) **::** [**producer\_schedule**](structeosio_1_1producer__schedule.md)


## Public Attributes

|Type|Name|
|-----|-----|
|uint32\_t|[**version**](structeosio_1_1producer__schedule_a3958be89c877e9249710a8aafa155829.md#1a3958be89c877e9249710a8aafa155829)|
|std::vector< **[producer\_key](structeosio_1_1producer__key.md)** >|[**producers**](structeosio_1_1producer__schedule_a83fb548e50e59d21e71b7ab812f29600.md#1a83fb548e50e59d21e71b7ab812f29600)|


## Detailed Description

Defines both the order, account name, and signing keys of the active set of producers. 
## Public Attributes Documentation

### variable <a id="1a3958be89c877e9249710a8aafa155829" href="#1a3958be89c877e9249710a8aafa155829">version</a>

```cpp
uint32_t eosio::producer_schedule::version;
```


Version number of the schedule. It is sequentially incrementing version number 

### variable <a id="1a83fb548e50e59d21e71b7ab812f29600" href="#1a83fb548e50e59d21e71b7ab812f29600">producers</a>

```cpp
std::vector< producer_key > eosio::producer_schedule::producers;
```


List of producers for this schedule, including its signing key 



----------------------------------------
The documentation for this class was generated from the following file: `in/eosio.cdt/libraries/eosiolib/contracts/eosio/producer\_schedule.hpp`
