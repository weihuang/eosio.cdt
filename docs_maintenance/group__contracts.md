---
search:
    keywords: ['contracts', 'eosio::time_point_sec', 'eosio::block_timestamp', 'eosio::microseconds', 'eosio::time_point', 'block_timestamp_type', 'seconds', 'milliseconds', 'minutes', 'hours', 'days']
---

# group contracts

C++ Contracts API for chain-dependent smart-contract functionality. [More...](#detailed-description)
## Modules

* [**Action**](group__action.md) Defines type-safe C++ wrapers for querying action and sending action. 
* [**Contract**](group__contract.md) Defines contract type which is base class for every EOSIO contract. 
* [**Dispatcher**](group__dispatcher.md) Defines C++ functions to dispatch action to proper action handler inside a contract. 
* [**Multi Index Table**](group__multiindex.md) Defines EOSIO Multi Index Table. 
* [**Permission**](group__permission.md) Defines C++ API functions for validating authorization of keys and permissions. 
* [**Privileged**](group__privileged.md) Defines C++ Privileged API. 
* [**Producer Key**](group__producer__key.md) Maps producer with its signing key, used for producer schedule. 
* [**Producer Schedule**](group__producer__schedule.md) Defines both the order, account name, and signing keys of the active set of producers. 
* [**Singleton Table**](group__singleton.md) Defines EOSIO Singleton Table used with multiindex. 
* [**Transaction**](group__transaction.md) Type-safe C++ wrappers for transaction C API. 
* [**Multi Index Table**](group__multi__index.md) Defines EOSIO Multi Index Table. 
* [**System**](group__system.md) Defines wrappers over eosio\_assert. 
* [**Time**](group__time.md) Classes for working with time. 


## Classes

|Type|Name|
|-----|-----|
|class|[**eosio::time\_point\_sec**](classeosio_1_1time__point__sec.md)|
|class|[**eosio::block\_timestamp**](classeosio_1_1block__timestamp.md)|
|class|[**eosio::microseconds**](classeosio_1_1microseconds.md)|
|class|[**eosio::time\_point**](classeosio_1_1time__point.md)|


## Detailed Description

## Typedefs Documentation

### typedef <a id="ga4f8fa835ef0dc341addb6e51d0d840b3" href="#ga4f8fa835ef0dc341addb6e51d0d840b3">block\_timestamp\_type</a>

```cpp
typedef block_timestamp eosio::block_timestamp_type;
```



## Functions Documentation

### function <a id="gaf7174ec0c48074b993ec6bac37a84682" href="#gaf7174ec0c48074b993ec6bac37a84682">seconds</a>

```cpp
microseconds contracts::seconds (
    int64_t s
)
```



### function <a id="ga2b8d5b8f5a1829bd6967c3fe89eea506" href="#ga2b8d5b8f5a1829bd6967c3fe89eea506">milliseconds</a>

```cpp
microseconds contracts::milliseconds (
    int64_t s
)
```



### function <a id="ga29a31fdb3cb6abce3f6abcf6840ea00c" href="#ga29a31fdb3cb6abce3f6abcf6840ea00c">minutes</a>

```cpp
microseconds contracts::minutes (
    int64_t m
)
```



### function <a id="ga33b982404d2fd14a2618564ae69db447" href="#ga33b982404d2fd14a2618564ae69db447">hours</a>

```cpp
microseconds contracts::hours (
    int64_t h
)
```



### function <a id="gae1538fa412576d5b367a62c2f0e38730" href="#gae1538fa412576d5b367a62c2f0e38730">days</a>

```cpp
microseconds contracts::days (
    int64_t d
)
```



