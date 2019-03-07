---
search:
    keywords: ['eosio::variant_action_wrapper', 'action_name', 'code_name', 'permissions', 'variant_action_wrapper', 'variant_action_wrapper', 'variant_action_wrapper', 'variant_action_wrapper', 'to_action', 'send', 'send_context_free', 'variant_action_wrapper', 'variant_action_wrapper', 'variant_action_wrapper', 'variant_action_wrapper', 'to_action', 'send', 'send_context_free', 'get_mem_ptr', 'get_mem_ptr']
---

# struct eosio::variant\_action\_wrapper

[**Class List**](annotated.md) **>** [**eosio**](namespaceeosio.md) **::** [**variant\_action\_wrapper**](structeosio_1_1variant__action__wrapper.md)


## Public Static Attributes

|Type|Name|
|-----|-----|
|static constexpr **[eosio::name](structeosio_1_1name.md)**|[**action\_name**](group__action_ga15ad29ffeb4fbdff7657fab390a42400.md#ga15ad29ffeb4fbdff7657fab390a42400)|


## Public Attributes

|Type|Name|
|-----|-----|
|**[eosio::name](structeosio_1_1name.md)**|[**code\_name**](group__action_ga171691c13edf4f6269bb1eec44e290f3.md#ga171691c13edf4f6269bb1eec44e290f3)|
|std::vector< **[eosio::permission\_level](structeosio_1_1permission__level.md)** >|[**permissions**](group__action_ga49bedca283f0ac9130d892b8ee826bfa.md#ga49bedca283f0ac9130d892b8ee826bfa)|


## Public Functions

|Type|Name|
|-----|-----|
|constexpr|[**variant\_action\_wrapper**](group__action_ga54b47e0e84c464142c902d7194426d3a.md#ga54b47e0e84c464142c902d7194426d3a) (Code && code, std::vector< **[eosio::permission\_level](structeosio_1_1permission__level.md)** > && perms) |
|constexpr|[**variant\_action\_wrapper**](group__action_gae3836c99f199acd09f326c0788ad50ef.md#gae3836c99f199acd09f326c0788ad50ef) (Code && code, const std::vector< **[eosio::permission\_level](structeosio_1_1permission__level.md)** > & perms) |
|constexpr|[**variant\_action\_wrapper**](group__action_ga0d83dd58a99adffbba6bd026e47a211e.md#ga0d83dd58a99adffbba6bd026e47a211e) (Code && code, **[eosio::permission\_level](structeosio_1_1permission__level.md)** && perm) |
|constexpr|[**variant\_action\_wrapper**](group__action_gac6c4a0bc39c0e593277378526083c7cc.md#gac6c4a0bc39c0e593277378526083c7cc) (Code && code, const **[eosio::permission\_level](structeosio_1_1permission__level.md)** & perm) |
|**[action](structeosio_1_1action.md)**|[**to\_action**](group__action_gafe014cc8e17701b610af9e2adcc76da7.md#gafe014cc8e17701b610af9e2adcc76da7) (Args &&... args) const |
|void|[**send**](group__action_ga1f95cbb7f23a1790f0ddf67d2336dd03.md#ga1f95cbb7f23a1790f0ddf67d2336dd03) (Args &&... args) const |
|void|[**send\_context\_free**](group__action_ga4cf54eec122768c5dda66731eb1c0cd3.md#ga4cf54eec122768c5dda66731eb1c0cd3) (Args &&... args) const |
|constexpr|[**variant\_action\_wrapper**](structeosio_1_1variant__action__wrapper_a54b47e0e84c464142c902d7194426d3a.md#1a54b47e0e84c464142c902d7194426d3a) (Code && code, std::vector< **[eosio::permission\_level](structeosio_1_1permission__level.md)** > && perms) |
|constexpr|[**variant\_action\_wrapper**](structeosio_1_1variant__action__wrapper_ae3836c99f199acd09f326c0788ad50ef.md#1ae3836c99f199acd09f326c0788ad50ef) (Code && code, const std::vector< **[eosio::permission\_level](structeosio_1_1permission__level.md)** > & perms) |
|constexpr|[**variant\_action\_wrapper**](structeosio_1_1variant__action__wrapper_a0d83dd58a99adffbba6bd026e47a211e.md#1a0d83dd58a99adffbba6bd026e47a211e) (Code && code, **[eosio::permission\_level](structeosio_1_1permission__level.md)** && perm) |
|constexpr|[**variant\_action\_wrapper**](structeosio_1_1variant__action__wrapper_ac6c4a0bc39c0e593277378526083c7cc.md#1ac6c4a0bc39c0e593277378526083c7cc) (Code && code, const **[eosio::permission\_level](structeosio_1_1permission__level.md)** & perm) |
|**[action](structeosio_1_1action.md)**|[**to\_action**](structeosio_1_1variant__action__wrapper_afe014cc8e17701b610af9e2adcc76da7.md#1afe014cc8e17701b610af9e2adcc76da7) (Args &&... args) const |
|void|[**send**](structeosio_1_1variant__action__wrapper_a1f95cbb7f23a1790f0ddf67d2336dd03.md#1a1f95cbb7f23a1790f0ddf67d2336dd03) (Args &&... args) const |
|void|[**send\_context\_free**](structeosio_1_1variant__action__wrapper_a4cf54eec122768c5dda66731eb1c0cd3.md#1a4cf54eec122768c5dda66731eb1c0cd3) (Args &&... args) const |


## Public Static Functions

|Type|Name|
|-----|-----|
|static constexpr auto|[**get\_mem\_ptr**](group__action_gacc8f5998ff5d156eae85f525b0cb17e0.md#gacc8f5998ff5d156eae85f525b0cb17e0) () |
|static constexpr auto|[**get\_mem\_ptr**](structeosio_1_1variant__action__wrapper_acc8f5998ff5d156eae85f525b0cb17e0.md#1acc8f5998ff5d156eae85f525b0cb17e0) () |


## Public Static Attributes Documentation

### variable <a id="ga15ad29ffeb4fbdff7657fab390a42400" href="#ga15ad29ffeb4fbdff7657fab390a42400">action\_name</a>

```cpp
static constexpr eosio::name eosio::variant_action_wrapper< Name, Actions >::action_name;
```



## Public Attributes Documentation

### variable <a id="ga171691c13edf4f6269bb1eec44e290f3" href="#ga171691c13edf4f6269bb1eec44e290f3">code\_name</a>

```cpp
eosio::name eosio::variant_action_wrapper< Name, Actions >::code_name;
```



### variable <a id="ga49bedca283f0ac9130d892b8ee826bfa" href="#ga49bedca283f0ac9130d892b8ee826bfa">permissions</a>

```cpp
std::vector< eosio::permission_level > eosio::variant_action_wrapper< Name, Actions >::permissions;
```



## Public Functions Documentation

### function <a id="ga54b47e0e84c464142c902d7194426d3a" href="#ga54b47e0e84c464142c902d7194426d3a">variant\_action\_wrapper (1/8)</a>

```cpp
constexpr eosio::variant_action_wrapper::variant_action_wrapper (
    Code && code,
    std::vector< eosio::permission_level > && perms
)
```



### function <a id="gae3836c99f199acd09f326c0788ad50ef" href="#gae3836c99f199acd09f326c0788ad50ef">variant\_action\_wrapper (2/8)</a>

```cpp
constexpr eosio::variant_action_wrapper::variant_action_wrapper (
    Code && code,
    const std::vector< eosio::permission_level > & perms
)
```



### function <a id="ga0d83dd58a99adffbba6bd026e47a211e" href="#ga0d83dd58a99adffbba6bd026e47a211e">variant\_action\_wrapper (3/8)</a>

```cpp
constexpr eosio::variant_action_wrapper::variant_action_wrapper (
    Code && code,
    eosio::permission_level && perm
)
```



### function <a id="gac6c4a0bc39c0e593277378526083c7cc" href="#gac6c4a0bc39c0e593277378526083c7cc">variant\_action\_wrapper (4/8)</a>

```cpp
constexpr eosio::variant_action_wrapper::variant_action_wrapper (
    Code && code,
    const eosio::permission_level & perm
)
```



### function <a id="gafe014cc8e17701b610af9e2adcc76da7" href="#gafe014cc8e17701b610af9e2adcc76da7">to\_action (1/2)</a>

```cpp
action eosio::variant_action_wrapper::to_action (
    Args &&... args
) const
```



### function <a id="ga1f95cbb7f23a1790f0ddf67d2336dd03" href="#ga1f95cbb7f23a1790f0ddf67d2336dd03">send (1/2)</a>

```cpp
void eosio::variant_action_wrapper::send (
    Args &&... args
) const
```



### function <a id="ga4cf54eec122768c5dda66731eb1c0cd3" href="#ga4cf54eec122768c5dda66731eb1c0cd3">send\_context\_free (1/2)</a>

```cpp
void eosio::variant_action_wrapper::send_context_free (
    Args &&... args
) const
```



### function <a id="1a54b47e0e84c464142c902d7194426d3a" href="#1a54b47e0e84c464142c902d7194426d3a">variant\_action\_wrapper (5/8)</a>

```cpp
constexpr eosio::variant_action_wrapper::variant_action_wrapper (
    Code && code,
    std::vector< eosio::permission_level > && perms
)
```



### function <a id="1ae3836c99f199acd09f326c0788ad50ef" href="#1ae3836c99f199acd09f326c0788ad50ef">variant\_action\_wrapper (6/8)</a>

```cpp
constexpr eosio::variant_action_wrapper::variant_action_wrapper (
    Code && code,
    const std::vector< eosio::permission_level > & perms
)
```



### function <a id="1a0d83dd58a99adffbba6bd026e47a211e" href="#1a0d83dd58a99adffbba6bd026e47a211e">variant\_action\_wrapper (7/8)</a>

```cpp
constexpr eosio::variant_action_wrapper::variant_action_wrapper (
    Code && code,
    eosio::permission_level && perm
)
```



### function <a id="1ac6c4a0bc39c0e593277378526083c7cc" href="#1ac6c4a0bc39c0e593277378526083c7cc">variant\_action\_wrapper (8/8)</a>

```cpp
constexpr eosio::variant_action_wrapper::variant_action_wrapper (
    Code && code,
    const eosio::permission_level & perm
)
```



### function <a id="1afe014cc8e17701b610af9e2adcc76da7" href="#1afe014cc8e17701b610af9e2adcc76da7">to\_action (2/2)</a>

```cpp
action eosio::variant_action_wrapper::to_action (
    Args &&... args
) const
```



### function <a id="1a1f95cbb7f23a1790f0ddf67d2336dd03" href="#1a1f95cbb7f23a1790f0ddf67d2336dd03">send (2/2)</a>

```cpp
void eosio::variant_action_wrapper::send (
    Args &&... args
) const
```



### function <a id="1a4cf54eec122768c5dda66731eb1c0cd3" href="#1a4cf54eec122768c5dda66731eb1c0cd3">send\_context\_free (2/2)</a>

```cpp
void eosio::variant_action_wrapper::send_context_free (
    Args &&... args
) const
```



## Public Static Functions Documentation

### function <a id="gacc8f5998ff5d156eae85f525b0cb17e0" href="#gacc8f5998ff5d156eae85f525b0cb17e0">get\_mem\_ptr (1/2)</a>

```cpp
static constexpr auto eosio::variant_action_wrapper::get_mem_ptr ()
```



### function <a id="1acc8f5998ff5d156eae85f525b0cb17e0" href="#1acc8f5998ff5d156eae85f525b0cb17e0">get\_mem\_ptr (2/2)</a>

```cpp
static constexpr auto eosio::variant_action_wrapper::get_mem_ptr ()
```





----------------------------------------
The documentation for this class was generated from the following file: `in/eosio.cdt/libraries/eosiolib/action.hpp`
