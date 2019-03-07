---
search:
    keywords: ['eosio::action_wrapper', 'action_name', 'code_name', 'permissions', 'action_wrapper', 'action_wrapper', 'action_wrapper', 'action_wrapper', 'to_action', 'send', 'send_context_free', 'action_wrapper', 'action_wrapper', 'action_wrapper', 'action_wrapper', 'to_action', 'send', 'send_context_free', 'get_mem_ptr', 'get_mem_ptr']
---

# struct eosio::action\_wrapper

[**Class List**](annotated.md) **>** [**eosio**](namespaceeosio.md) **::** [**action\_wrapper**](structeosio_1_1action__wrapper.md)


## Public Static Attributes

|Type|Name|
|-----|-----|
|static constexpr **[eosio::name](structeosio_1_1name.md)**|[**action\_name**](group__action_gaa16db089fc3058b38784a72877fab53d.md#gaa16db089fc3058b38784a72877fab53d)|


## Public Attributes

|Type|Name|
|-----|-----|
|**[eosio::name](structeosio_1_1name.md)**|[**code\_name**](group__action_ga8bbb70cfa7ca6965bed97142c3e1c10d.md#ga8bbb70cfa7ca6965bed97142c3e1c10d)|
|std::vector< **[eosio::permission\_level](structeosio_1_1permission__level.md)** >|[**permissions**](group__action_ga894173df2252698dd0721b562ad0633b.md#ga894173df2252698dd0721b562ad0633b)|


## Public Functions

|Type|Name|
|-----|-----|
|constexpr|[**action\_wrapper**](group__action_ga12ef4e4f5e9459ee02ea7113706f3147.md#ga12ef4e4f5e9459ee02ea7113706f3147) (Code && code, std::vector< **[eosio::permission\_level](structeosio_1_1permission__level.md)** > && perms) |
|constexpr|[**action\_wrapper**](group__action_ga333abd92bf1c6c965759a93ee9dc280b.md#ga333abd92bf1c6c965759a93ee9dc280b) (Code && code, const std::vector< **[eosio::permission\_level](structeosio_1_1permission__level.md)** > & perms) |
|constexpr|[**action\_wrapper**](group__action_gaf1be67f4109fb82bfcc18ad47a3f30ea.md#gaf1be67f4109fb82bfcc18ad47a3f30ea) (Code && code, **[eosio::permission\_level](structeosio_1_1permission__level.md)** && perm) |
|constexpr|[**action\_wrapper**](group__action_ga8b3fbccd819478987dbcba4362b1357f.md#ga8b3fbccd819478987dbcba4362b1357f) (Code && code, const **[eosio::permission\_level](structeosio_1_1permission__level.md)** & perm) |
|**[action](structeosio_1_1action.md)**|[**to\_action**](group__action_gae422e0f1f06d13925a29dcac8f4457f1.md#gae422e0f1f06d13925a29dcac8f4457f1) (Args &&... args) const |
|void|[**send**](group__action_gaa7f4781b065eda40ba6803410f1b2eb1.md#gaa7f4781b065eda40ba6803410f1b2eb1) (Args &&... args) const |
|void|[**send\_context\_free**](group__action_gae9fc18e5e6a4ca8a70120594aaab73e5.md#gae9fc18e5e6a4ca8a70120594aaab73e5) (Args &&... args) const |
|constexpr|[**action\_wrapper**](structeosio_1_1action__wrapper_a12ef4e4f5e9459ee02ea7113706f3147.md#1a12ef4e4f5e9459ee02ea7113706f3147) (Code && code, std::vector< **[eosio::permission\_level](structeosio_1_1permission__level.md)** > && perms) |
|constexpr|[**action\_wrapper**](structeosio_1_1action__wrapper_a333abd92bf1c6c965759a93ee9dc280b.md#1a333abd92bf1c6c965759a93ee9dc280b) (Code && code, const std::vector< **[eosio::permission\_level](structeosio_1_1permission__level.md)** > & perms) |
|constexpr|[**action\_wrapper**](structeosio_1_1action__wrapper_af1be67f4109fb82bfcc18ad47a3f30ea.md#1af1be67f4109fb82bfcc18ad47a3f30ea) (Code && code, **[eosio::permission\_level](structeosio_1_1permission__level.md)** && perm) |
|constexpr|[**action\_wrapper**](structeosio_1_1action__wrapper_a8b3fbccd819478987dbcba4362b1357f.md#1a8b3fbccd819478987dbcba4362b1357f) (Code && code, const **[eosio::permission\_level](structeosio_1_1permission__level.md)** & perm) |
|**[action](structeosio_1_1action.md)**|[**to\_action**](structeosio_1_1action__wrapper_ae422e0f1f06d13925a29dcac8f4457f1.md#1ae422e0f1f06d13925a29dcac8f4457f1) (Args &&... args) const |
|void|[**send**](structeosio_1_1action__wrapper_aa7f4781b065eda40ba6803410f1b2eb1.md#1aa7f4781b065eda40ba6803410f1b2eb1) (Args &&... args) const |
|void|[**send\_context\_free**](structeosio_1_1action__wrapper_ae9fc18e5e6a4ca8a70120594aaab73e5.md#1ae9fc18e5e6a4ca8a70120594aaab73e5) (Args &&... args) const |


## Public Static Functions

|Type|Name|
|-----|-----|
|static constexpr auto|[**get\_mem\_ptr**](group__action_ga44ef1255c5018cdffb249665017fde8c.md#ga44ef1255c5018cdffb249665017fde8c) () |
|static constexpr auto|[**get\_mem\_ptr**](structeosio_1_1action__wrapper_a44ef1255c5018cdffb249665017fde8c.md#1a44ef1255c5018cdffb249665017fde8c) () |


## Public Static Attributes Documentation

### variable <a id="gaa16db089fc3058b38784a72877fab53d" href="#gaa16db089fc3058b38784a72877fab53d">action\_name</a>

```cpp
static constexpr eosio::name eosio::action_wrapper< Name, Action >::action_name;
```



## Public Attributes Documentation

### variable <a id="ga8bbb70cfa7ca6965bed97142c3e1c10d" href="#ga8bbb70cfa7ca6965bed97142c3e1c10d">code\_name</a>

```cpp
eosio::name eosio::action_wrapper< Name, Action >::code_name;
```



### variable <a id="ga894173df2252698dd0721b562ad0633b" href="#ga894173df2252698dd0721b562ad0633b">permissions</a>

```cpp
std::vector< eosio::permission_level > eosio::action_wrapper< Name, Action >::permissions;
```



## Public Functions Documentation

### function <a id="ga12ef4e4f5e9459ee02ea7113706f3147" href="#ga12ef4e4f5e9459ee02ea7113706f3147">action\_wrapper (1/8)</a>

```cpp
constexpr eosio::action_wrapper::action_wrapper (
    Code && code,
    std::vector< eosio::permission_level > && perms
)
```



### function <a id="ga333abd92bf1c6c965759a93ee9dc280b" href="#ga333abd92bf1c6c965759a93ee9dc280b">action\_wrapper (2/8)</a>

```cpp
constexpr eosio::action_wrapper::action_wrapper (
    Code && code,
    const std::vector< eosio::permission_level > & perms
)
```



### function <a id="gaf1be67f4109fb82bfcc18ad47a3f30ea" href="#gaf1be67f4109fb82bfcc18ad47a3f30ea">action\_wrapper (3/8)</a>

```cpp
constexpr eosio::action_wrapper::action_wrapper (
    Code && code,
    eosio::permission_level && perm
)
```



### function <a id="ga8b3fbccd819478987dbcba4362b1357f" href="#ga8b3fbccd819478987dbcba4362b1357f">action\_wrapper (4/8)</a>

```cpp
constexpr eosio::action_wrapper::action_wrapper (
    Code && code,
    const eosio::permission_level & perm
)
```



### function <a id="gae422e0f1f06d13925a29dcac8f4457f1" href="#gae422e0f1f06d13925a29dcac8f4457f1">to\_action (1/2)</a>

```cpp
action eosio::action_wrapper::to_action (
    Args &&... args
) const
```



### function <a id="gaa7f4781b065eda40ba6803410f1b2eb1" href="#gaa7f4781b065eda40ba6803410f1b2eb1">send (1/2)</a>

```cpp
void eosio::action_wrapper::send (
    Args &&... args
) const
```



### function <a id="gae9fc18e5e6a4ca8a70120594aaab73e5" href="#gae9fc18e5e6a4ca8a70120594aaab73e5">send\_context\_free (1/2)</a>

```cpp
void eosio::action_wrapper::send_context_free (
    Args &&... args
) const
```



### function <a id="1a12ef4e4f5e9459ee02ea7113706f3147" href="#1a12ef4e4f5e9459ee02ea7113706f3147">action\_wrapper (5/8)</a>

```cpp
constexpr eosio::action_wrapper::action_wrapper (
    Code && code,
    std::vector< eosio::permission_level > && perms
)
```



### function <a id="1a333abd92bf1c6c965759a93ee9dc280b" href="#1a333abd92bf1c6c965759a93ee9dc280b">action\_wrapper (6/8)</a>

```cpp
constexpr eosio::action_wrapper::action_wrapper (
    Code && code,
    const std::vector< eosio::permission_level > & perms
)
```



### function <a id="1af1be67f4109fb82bfcc18ad47a3f30ea" href="#1af1be67f4109fb82bfcc18ad47a3f30ea">action\_wrapper (7/8)</a>

```cpp
constexpr eosio::action_wrapper::action_wrapper (
    Code && code,
    eosio::permission_level && perm
)
```



### function <a id="1a8b3fbccd819478987dbcba4362b1357f" href="#1a8b3fbccd819478987dbcba4362b1357f">action\_wrapper (8/8)</a>

```cpp
constexpr eosio::action_wrapper::action_wrapper (
    Code && code,
    const eosio::permission_level & perm
)
```



### function <a id="1ae422e0f1f06d13925a29dcac8f4457f1" href="#1ae422e0f1f06d13925a29dcac8f4457f1">to\_action (2/2)</a>

```cpp
action eosio::action_wrapper::to_action (
    Args &&... args
) const
```



### function <a id="1aa7f4781b065eda40ba6803410f1b2eb1" href="#1aa7f4781b065eda40ba6803410f1b2eb1">send (2/2)</a>

```cpp
void eosio::action_wrapper::send (
    Args &&... args
) const
```



### function <a id="1ae9fc18e5e6a4ca8a70120594aaab73e5" href="#1ae9fc18e5e6a4ca8a70120594aaab73e5">send\_context\_free (2/2)</a>

```cpp
void eosio::action_wrapper::send_context_free (
    Args &&... args
) const
```



## Public Static Functions Documentation

### function <a id="ga44ef1255c5018cdffb249665017fde8c" href="#ga44ef1255c5018cdffb249665017fde8c">get\_mem\_ptr (1/2)</a>

```cpp
static constexpr auto eosio::action_wrapper::get_mem_ptr ()
```



### function <a id="1a44ef1255c5018cdffb249665017fde8c" href="#1a44ef1255c5018cdffb249665017fde8c">get\_mem\_ptr (2/2)</a>

```cpp
static constexpr auto eosio::action_wrapper::get_mem_ptr ()
```





----------------------------------------
The documentation for this class was generated from the following file: `in/eosio.cdt/libraries/eosiolib/action.hpp`
