---
search:
    keywords: ['action', 'eosio::permission_level', 'eosio::action', 'eosio::detail::unwrap', 'eosio::detail::unwrap< ignore< T > >', 'eosio::detail::convert', 'eosio::detail::convert< const char * >', 'eosio::detail::convert< char * >', 'eosio::detail::is_same', 'eosio::detail::is_same< bool, U >', 'eosio::detail::is_same< T, bool >', 'eosio::detail::get_nth_impl', 'eosio::detail::get_nth_impl< N, N, Arg, Args... >', 'eosio::detail::get_nth', 'eosio::detail::check_types', 'eosio::detail::check_types< Action, I, T >', 'eosio::action_wrapper', 'eosio::variant_action_wrapper', 'eosio::inline_dispatcher', 'eosio::inline_dispatcher< void(T::*)(Args...), Name >', 'type', 'type', 'deduced', 'deduced_nounwrap', 'type', 'type', 'type', 'type', 'actor', 'permission', 'account', 'name', 'authorization', 'data', 'value', 'value', 'value', 'value', 'value', 'value', 'value', 'value', 'action_name', 'code_name', 'permissions', 'action_name', 'code_name', 'permissions', 'unpack_action_data', 'require_recipient', 'require_recipient', 'require_auth', 'permission_level', 'permission_level', 'require_auth', 'has_auth', 'is_account', 'action', 'action', 'action', 'EOSLIB_SERIALIZE', 'send_context_free', 'data_as', 'get_args', 'get_args_nounwrap', 'type_check', 'action_wrapper', 'action_wrapper', 'action_wrapper', 'action_wrapper', 'get_mem_ptr', 'to_action', 'send', 'send_context_free', 'variant_action_wrapper', 'variant_action_wrapper', 'variant_action_wrapper', 'variant_action_wrapper', 'get_mem_ptr', 'to_action', 'send', 'send_context_free', 'dispatch_inline', 'call', 'call', 'publication_time', 'read_action_data', 'SEND_INLINE_ACTION', 'SEND_INLINE_ACTION']
---

# group action

Defines type-safe C++ wrapers for querying action and sending action. [More...](#detailed-description)
## Classes

|Type|Name|
|-----|-----|
|struct|[**eosio::permission\_level**](structeosio_1_1permission__level.md)|
|struct|[**eosio::action**](structeosio_1_1action.md)|
|struct|[**eosio::detail::unwrap**](structeosio_1_1detail_1_1unwrap.md)|
|struct|[**eosio::detail::unwrap< ignore< T > >**](structeosio_1_1detail_1_1unwrap_3_01ignore_3_01_t_01_4_01_4.md)|
|struct|[**eosio::detail::convert**](structeosio_1_1detail_1_1convert.md)|
|struct|[**eosio::detail::convert< const char \* >**](structeosio_1_1detail_1_1convert_3_01const_01char_01_5_01_4.md)|
|struct|[**eosio::detail::convert< char \* >**](structeosio_1_1detail_1_1convert_3_01char_01_5_01_4.md)|
|struct|[**eosio::detail::is\_same**](structeosio_1_1detail_1_1is__same.md)|
|struct|[**eosio::detail::is\_same< bool, U >**](structeosio_1_1detail_1_1is__same_3_01bool_00_01_u_01_4.md)|
|struct|[**eosio::detail::is\_same< T, bool >**](structeosio_1_1detail_1_1is__same_3_01_t_00_01bool_01_4.md)|
|struct|[**eosio::detail::get\_nth\_impl**](structeosio_1_1detail_1_1get__nth__impl.md)|
|struct|[**eosio::detail::get\_nth\_impl< N, N, Arg, Args... >**](structeosio_1_1detail_1_1get__nth__impl_3_01_n_00_01_n_00_01_arg_00_01_args_8_8_8_01_4.md)|
|struct|[**eosio::detail::get\_nth**](structeosio_1_1detail_1_1get__nth.md)|
|struct|[**eosio::detail::check\_types**](structeosio_1_1detail_1_1check__types.md)|
|struct|[**eosio::detail::check\_types< Action, I, T >**](structeosio_1_1detail_1_1check__types_3_01_action_00_01_i_00_01_t_01_4.md)|
|struct|[**eosio::action\_wrapper**](structeosio_1_1action__wrapper.md)|
|struct|[**eosio::variant\_action\_wrapper**](structeosio_1_1variant__action__wrapper.md)|
|struct|[**eosio::inline\_dispatcher**](structeosio_1_1inline__dispatcher.md)|
|struct|[**eosio::inline\_dispatcher< void(T::\*)(Args...), Name >**](structeosio_1_1inline__dispatcher_3_01void_07_t_1_1_5_08_07_args_8_8_8_08_00_01_name_01_4.md)|


## Variables

## Defines

## Detailed Description



**Note:**

There are some methods from the **[Action](.md#group__action)** that can be used directly from C++ 



## Typedefs Documentation

### typedef <a id="gab2da0d039e48ffa15bdb76d85cd5084d" href="#gab2da0d039e48ffa15bdb76d85cd5084d">type</a>

```cpp
typedef T eosio::detail::unwrap< T >::type;
```



### typedef <a id="ga1fbe09269b151a345707a9c092925a70" href="#ga1fbe09269b151a345707a9c092925a70">type</a>

```cpp
typedef T eosio::detail::unwrap< ignore< T > >::type;
```



### typedef <a id="gaacfcc46392b7e9dba3e8c7a0fe16882f" href="#gaacfcc46392b7e9dba3e8c7a0fe16882f">deduced</a>

```cpp
using eosio::detail::deduced = typedef decltype(get_args(Action));
```



### typedef <a id="ga339c5b4ff7e7f23dd20bef9f3eaebe32" href="#ga339c5b4ff7e7f23dd20bef9f3eaebe32">deduced\_nounwrap</a>

```cpp
using eosio::detail::deduced_nounwrap = typedef decltype(get_args_nounwrap(Action));
```



### typedef <a id="ga3d03b3802c99dce5ec2da3b8d3ec2125" href="#ga3d03b3802c99dce5ec2da3b8d3ec2125">type</a>

```cpp
typedef T eosio::detail::convert< T >::type;
```



### typedef <a id="ga3c226d8ada064b9bee9a45cd8605bdda" href="#ga3c226d8ada064b9bee9a45cd8605bdda">type</a>

```cpp
typedef std::string eosio::detail::convert< const char * >::type;
```



### typedef <a id="ga4c4ce509298f0a3c28da23ed7aaa956d" href="#ga4c4ce509298f0a3c28da23ed7aaa956d">type</a>

```cpp
typedef std::string eosio::detail::convert< char * >::type;
```



### typedef <a id="gac8edfdee3179fdc47663e64cca125366" href="#gac8edfdee3179fdc47663e64cca125366">type</a>

```cpp
using eosio::detail::check_types< Action, I, T, Rest >::type =  check_types<Action, I+1, Rest...>;
```



## Variables Documentation

### variable <a id="gab5d07611f5ba5e7b5dff9e749c5696e0" href="#gab5d07611f5ba5e7b5dff9e749c5696e0">actor</a>

```cpp
name eosio::permission_level::actor;
```

Name of the account who owns this permission. 

Name of the account who owns this permission 

### variable <a id="gaf30baa92f0b3d6b611967c0dfb7555a7" href="#gaf30baa92f0b3d6b611967c0dfb7555a7">permission</a>

```cpp
name eosio::permission_level::permission;
```

Name of the permission. 

Name of the permission 

### variable <a id="ga4fc65ee0b7c184e7fcb8cdf6242220af" href="#ga4fc65ee0b7c184e7fcb8cdf6242220af">account</a>

```cpp
name eosio::action::account;
```

Name of the account the action is intended for. 

Name of the account the action is intended for 

### variable <a id="ga407ffb98514612d2e9683dd7d88af91a" href="#ga407ffb98514612d2e9683dd7d88af91a">name</a>

```cpp
name eosio::action::name;
```

Name of the action. 

Name of the action 

### variable <a id="gab1210c3d6a8c8489033333cfe0763ec9" href="#gab1210c3d6a8c8489033333cfe0763ec9">authorization</a>

```cpp
std::vector< permission_level > eosio::action::authorization;
```

List of permissions that authorize this action. 

List of permissions that authorize this action 

### variable <a id="ga097dcc6c11bcf5068a9bc123bc44ccac" href="#ga097dcc6c11bcf5068a9bc123bc44ccac">data</a>

```cpp
std::vector< char > eosio::action::data;
```

Payload data. 

Payload data 

### variable <a id="ga63ef70ab8e62110ee50947900be55572" href="#ga63ef70ab8e62110ee50947900be55572">value</a>

```cpp
static constexpr bool eosio::detail::is_same< T, U >::value;
```



### variable <a id="ga6a338aa57176c5e62a61e1404f669dfa" href="#ga6a338aa57176c5e62a61e1404f669dfa">value</a>

```cpp
static constexpr bool eosio::detail::is_same< bool, U >::value;
```



### variable <a id="ga0d9fcb63bf7829395138d0fd494e685f" href="#ga0d9fcb63bf7829395138d0fd494e685f">value</a>

```cpp
static constexpr bool eosio::detail::is_same< T, bool >::value;
```



### variable <a id="ga086fd531d935f39f4f5279f24c7e8c1a" href="#ga086fd531d935f39f4f5279f24c7e8c1a">value</a>

```cpp
static constexpr auto eosio::detail::get_nth_impl< N, I, Arg, Args >::value;
```



### variable <a id="gac232102c5c317e294079e209be470e7c" href="#gac232102c5c317e294079e209be470e7c">value</a>

```cpp
static constexpr auto eosio::detail::get_nth_impl< N, N, Arg, Args... >::value;
```



### variable <a id="gaed968d54c18b1b5e263f89a78e3706f9" href="#gaed968d54c18b1b5e263f89a78e3706f9">value</a>

```cpp
static constexpr auto eosio::detail::get_nth< N, Args >::value;
```



### variable <a id="ga2c82d2a3dfa475f0dae6b3589ac056c9" href="#ga2c82d2a3dfa475f0dae6b3589ac056c9">value</a>

```cpp
static constexpr bool eosio::detail::check_types< Action, I, T, Rest >::value;
```



### variable <a id="gaff57e22b821fb4f6fcad48901d86e56f" href="#gaff57e22b821fb4f6fcad48901d86e56f">value</a>

```cpp
static constexpr bool eosio::detail::check_types< Action, I, T >::value;
```



### variable <a id="gaa16db089fc3058b38784a72877fab53d" href="#gaa16db089fc3058b38784a72877fab53d">action\_name</a>

```cpp
static constexpr eosio::name eosio::action_wrapper< Name, Action >::action_name;
```



### variable <a id="ga8bbb70cfa7ca6965bed97142c3e1c10d" href="#ga8bbb70cfa7ca6965bed97142c3e1c10d">code\_name</a>

```cpp
eosio::name eosio::action_wrapper< Name, Action >::code_name;
```



### variable <a id="ga894173df2252698dd0721b562ad0633b" href="#ga894173df2252698dd0721b562ad0633b">permissions</a>

```cpp
std::vector< eosio::permission_level > eosio::action_wrapper< Name, Action >::permissions;
```



### variable <a id="ga15ad29ffeb4fbdff7657fab390a42400" href="#ga15ad29ffeb4fbdff7657fab390a42400">action\_name</a>

```cpp
static constexpr eosio::name eosio::variant_action_wrapper< Name, Actions >::action_name;
```



### variable <a id="ga171691c13edf4f6269bb1eec44e290f3" href="#ga171691c13edf4f6269bb1eec44e290f3">code\_name</a>

```cpp
eosio::name eosio::variant_action_wrapper< Name, Actions >::code_name;
```



### variable <a id="ga49bedca283f0ac9130d892b8ee826bfa" href="#ga49bedca283f0ac9130d892b8ee826bfa">permissions</a>

```cpp
std::vector< eosio::permission_level > eosio::variant_action_wrapper< Name, Actions >::permissions;
```



## Functions Documentation

### function <a id="ga3ce0a297276d44f03c9b5dc17fcd2b31" href="#ga3ce0a297276d44f03c9b5dc17fcd2b31">unpack\_action\_data</a>

```cpp
T action::unpack_action_data ()
```

Interpret the action body as type T. 



**Returns:**

Unpacked action data casted as T.


Example:

```cpp
struct dummy_action {
  char a; //1
  unsigned long long b; //8
  int  c; //4

  EOSLIB_SERIALIZE( dummy_action, (a)(b)(c) )
};
dummy_action msg = unpack_action_data<dummy_action>();
```

 

### function <a id="ga4e1838d05857e38ddf8916e616698460" href="#ga4e1838d05857e38ddf8916e616698460">require\_recipient</a>

```cpp
void action::require_recipient (
    name notify_account
)
```

Add the specified account to set of accounts to be notified. 

Add the specified account to set of accounts to be notified


**Parameters:**


* **notify\_account** - name of the account to be verified 



### function <a id="gaa61e47227ac315887caf1e028191ff7d" href="#gaa61e47227ac315887caf1e028191ff7d">require\_recipient</a>

```cpp
void action::require_recipient (
    name notify_account,
    accounts... remaining_accounts
)
```

Notify an account for this action. 

All of the listed accounts will be added to the set of accounts to be notified
This helper method enables you to add multiple accounts to accounts to be notified list with a single call rather than having to call the similar C API multiple times.


**Note:**

action.code is also considered as part of the set of notified accounts




**Parameters:**


* **notify\_account** account to be notified 
* **remaining\_accounts** accounts to be notified

Example:

```cpp
require_recipient("Account1"_n, "Account2"_n, "Account3"_n); // throws exception if any of them not in set.
```

 

### function <a id="ga47b4afe79f1de07376e2ecdd541f92c7" href="#ga47b4afe79f1de07376e2ecdd541f92c7">require\_auth</a>

```cpp
void action::require_auth (
    name n
)
```

Verify specified account exists in the set of provided auths. 

Verifies that **[Name](.md#group__name)** exists in the set of provided auths on a action. Fails if not found.


**Parameters:**


* **name** - name of the account to be verified 



### function <a id="ga5b23258308433be05a03ab4e2fce9b36" href="#ga5b23258308433be05a03ab4e2fce9b36">permission\_level</a>

```cpp
action::permission_level (
    name a,
    name p
)
```

Construct a new permission level object. 

Construct a new permission level object with actor name and permission name


**Parameters:**


* **a** - Name of the account who owns this authorization 
* **p** - Name of the permission 



### function <a id="ga80e38737c6e727a27e9ff7a195f74d5d" href="#ga80e38737c6e727a27e9ff7a195f74d5d">permission\_level</a>

```cpp
action::permission_level ()
```

Construct a new permission level object. 

Default Constructor 

### function <a id="gaa9c6bd255a286073e7dc8a337f2b11a2" href="#gaa9c6bd255a286073e7dc8a337f2b11a2">require\_auth</a>

```cpp
void action::require_auth (
    const permission_level & level
)
```

Require the specified authorization for this action. 

Require the specified authorization for this action. If this action doesn't contain the specified auth, it will fail.


**Parameters:**


* **level** - Authorization to be required 



### function <a id="ga9e4650a61bbe0809cc62e6b2af8252d3" href="#ga9e4650a61bbe0809cc62e6b2af8252d3">has\_auth</a>

```cpp
bool action::has_auth (
    name n
)
```

Verifies that n has auth. 

Verifies that n has auth.


**Parameters:**


* **n** - name of the account to be verified 



### function <a id="ga887cd0fed2350c5ae52565ba6e290db3" href="#ga887cd0fed2350c5ae52565ba6e290db3">is\_account</a>

```cpp
bool action::is_account (
    name n
)
```

Verifies that n is an existing account. 

Verifies that n is an existing account.


**Parameters:**


* **n** - name of the account to check 



### function <a id="gaebc29a38547efa71db8ec20cc56d69a4" href="#gaebc29a38547efa71db8ec20cc56d69a4">action</a>

```cpp
action::action () = default
```

Construct a new action object. 

Default Constructor 

### function <a id="ga9ef6c7fc0a06f53c754a1cc8af513d00" href="#ga9ef6c7fc0a06f53c754a1cc8af513d00">action</a>

```cpp
action::action (
    const permission_level & auth,
    struct name a,
    struct name n,
    T && value
)
```

Construct a new action object with the given permission, action receiver, action name, action struct. 

Construct a new action object with the given action struct


**Template parameters:**


* **T** - Type of action struct, must be serializable by `pack(...)` 



**Parameters:**


* **auth** - The permissions that authorizes this action 
* **a** - The name of the account this action is intended for (action receiver) 
* **n** - The name of the action 
* **value** - The action struct that will be serialized via pack into data 



### function <a id="gaa6b336f4f7a8c61d68e14d99a0a9cd9d" href="#gaa6b336f4f7a8c61d68e14d99a0a9cd9d">action</a>

```cpp
action::action (
    std::vector< permission_level > auths,
    struct name a,
    struct name n,
    T && value
)
```

Construct a new action object with the given list of permissions, action receiver, action name, action struct. 

Construct a new action object with the given action struct


**Template parameters:**


* **T** - Type of action struct, must be serializable by `pack(...)` 



**Parameters:**


* **auths** - The list of permissions that authorize this action 
* **a** - The name of the account this action is intended for (action receiver) 
* **n** - The name of the action 
* **value** - The action struct that will be serialized via pack into data 



### function <a id="ga848cfa77395aa8447c5468c619c4a42a" href="#ga848cfa77395aa8447c5468c619c4a42a">EOSLIB\_SERIALIZE</a>

```cpp
action::EOSLIB_SERIALIZE (
    action ,
    (account)(name)(authorization)(data) 
) const
```

Send the action as inline action. 

Send the action as inline action 

### function <a id="ga984a41daf2d1c4d6506cac0c98ac7a2a" href="#ga984a41daf2d1c4d6506cac0c98ac7a2a">send\_context\_free</a>

```cpp
void action::send_context_free () const
```

Send the action as inline context free action. 

Send the action as inline context free action


**Precondition:**

This action should not contain any authorizations 




### function <a id="gab10f4621dd9e24a33642d8fb240b1a01" href="#gab10f4621dd9e24a33642d8fb240b1a01">data\_as</a>

```cpp
T action::data_as ()
```

Retrieve the unpacked data as T. 

Retrieve the unpacked data as T


**Template parameters:**


* **T** expected type of data 



**Returns:**

the action data 




### function <a id="gaf21ef9cbbd55e02cd5c25be290cbf344" href="#gaf21ef9cbbd55e02cd5c25be290cbf344">get\_args</a>

```cpp
auto action::get_args (
    R(Act::*)(Args...) p
)
```



### function <a id="gac5b403e348ad44f1179170abf58376ed" href="#gac5b403e348ad44f1179170abf58376ed">get\_args\_nounwrap</a>

```cpp
auto action::get_args_nounwrap (
    R(Act::*)(Args...) p
)
```



### function <a id="ga2a11604fa722268266d668ff091676ff" href="#ga2a11604fa722268266d668ff091676ff">type\_check</a>

```cpp
constexpr bool action::type_check ()
```



### function <a id="ga12ef4e4f5e9459ee02ea7113706f3147" href="#ga12ef4e4f5e9459ee02ea7113706f3147">action\_wrapper</a>

```cpp
constexpr action::action_wrapper (
    Code && code,
    std::vector< eosio::permission_level > && perms
)
```



### function <a id="ga333abd92bf1c6c965759a93ee9dc280b" href="#ga333abd92bf1c6c965759a93ee9dc280b">action\_wrapper</a>

```cpp
constexpr action::action_wrapper (
    Code && code,
    const std::vector< eosio::permission_level > & perms
)
```



### function <a id="gaf1be67f4109fb82bfcc18ad47a3f30ea" href="#gaf1be67f4109fb82bfcc18ad47a3f30ea">action\_wrapper</a>

```cpp
constexpr action::action_wrapper (
    Code && code,
    eosio::permission_level && perm
)
```



### function <a id="ga8b3fbccd819478987dbcba4362b1357f" href="#ga8b3fbccd819478987dbcba4362b1357f">action\_wrapper</a>

```cpp
constexpr action::action_wrapper (
    Code && code,
    const eosio::permission_level & perm
)
```



### function <a id="ga44ef1255c5018cdffb249665017fde8c" href="#ga44ef1255c5018cdffb249665017fde8c">get\_mem\_ptr</a>

```cpp
static constexpr auto action::get_mem_ptr ()
```



### function <a id="gae422e0f1f06d13925a29dcac8f4457f1" href="#gae422e0f1f06d13925a29dcac8f4457f1">to\_action</a>

```cpp
action action::to_action (
    Args &&... args
) const
```



### function <a id="gaa7f4781b065eda40ba6803410f1b2eb1" href="#gaa7f4781b065eda40ba6803410f1b2eb1">send</a>

```cpp
void action::send (
    Args &&... args
) const
```



### function <a id="gae9fc18e5e6a4ca8a70120594aaab73e5" href="#gae9fc18e5e6a4ca8a70120594aaab73e5">send\_context\_free</a>

```cpp
void action::send_context_free (
    Args &&... args
) const
```



### function <a id="ga54b47e0e84c464142c902d7194426d3a" href="#ga54b47e0e84c464142c902d7194426d3a">variant\_action\_wrapper</a>

```cpp
constexpr action::variant_action_wrapper (
    Code && code,
    std::vector< eosio::permission_level > && perms
)
```



### function <a id="gae3836c99f199acd09f326c0788ad50ef" href="#gae3836c99f199acd09f326c0788ad50ef">variant\_action\_wrapper</a>

```cpp
constexpr action::variant_action_wrapper (
    Code && code,
    const std::vector< eosio::permission_level > & perms
)
```



### function <a id="ga0d83dd58a99adffbba6bd026e47a211e" href="#ga0d83dd58a99adffbba6bd026e47a211e">variant\_action\_wrapper</a>

```cpp
constexpr action::variant_action_wrapper (
    Code && code,
    eosio::permission_level && perm
)
```



### function <a id="gac6c4a0bc39c0e593277378526083c7cc" href="#gac6c4a0bc39c0e593277378526083c7cc">variant\_action\_wrapper</a>

```cpp
constexpr action::variant_action_wrapper (
    Code && code,
    const eosio::permission_level & perm
)
```



### function <a id="gacc8f5998ff5d156eae85f525b0cb17e0" href="#gacc8f5998ff5d156eae85f525b0cb17e0">get\_mem\_ptr</a>

```cpp
static constexpr auto action::get_mem_ptr ()
```



### function <a id="gafe014cc8e17701b610af9e2adcc76da7" href="#gafe014cc8e17701b610af9e2adcc76da7">to\_action</a>

```cpp
action action::to_action (
    Args &&... args
) const
```



### function <a id="ga1f95cbb7f23a1790f0ddf67d2336dd03" href="#ga1f95cbb7f23a1790f0ddf67d2336dd03">send</a>

```cpp
void action::send (
    Args &&... args
) const
```



### function <a id="ga4cf54eec122768c5dda66731eb1c0cd3" href="#ga4cf54eec122768c5dda66731eb1c0cd3">send\_context\_free</a>

```cpp
void action::send_context_free (
    Args &&... args
) const
```



### function <a id="ga0917f40ecb384d7934f7983351b397ce" href="#ga0917f40ecb384d7934f7983351b397ce">dispatch\_inline</a>

```cpp
void action::dispatch_inline (
    name code,
    name act,
    std::vector< permission_level > perms,
    std::tuple< Args... > args
)
```



### function <a id="ga8ccabfd180270a8128685eeaea33c75a" href="#ga8ccabfd180270a8128685eeaea33c75a">call</a>

```cpp
static void action::call (
    name code,
    const permission_level & perm,
    std::tuple< Args... > args
)
```



### function <a id="ga43a9a1084e226ca5e3b8f306174a18ef" href="#ga43a9a1084e226ca5e3b8f306174a18ef">call</a>

```cpp
static void action::call (
    name code,
    std::vector< permission_level > perms,
    std::tuple< Args... > args
)
```



### function <a id="ga0005da20de567962c4357c18ba29bdf7" href="#ga0005da20de567962c4357c18ba29bdf7">publication\_time</a>

```cpp
time_point action::publication_time ()
```

Get the publication time. 

Returns the time in microseconds from 1970 of the publication\_time


**Returns:**

the time in microseconds from 1970 of the publication\_time 




### function <a id="ga02dcd9ca25bcdd8279efe0d45e50c9eb" href="#ga02dcd9ca25bcdd8279efe0d45e50c9eb">read\_action\_data</a>

```cpp
uint32_t action::read_action_data (
    void * msg,
    uint32_t len
)
```

Copy current action data to the specified location. 

Copy up to length bytes of current action data to the specified location


**Parameters:**


* **msg** - a pointer where up to length bytes of the current action data will be copied 
* **len** - len of the current action data to be copied, 0 to report required size 



**Returns:**

the number of bytes copied to msg, or number of bytes that can be copied if len==0 passed 




**Precondition:**

`msg` is a valid pointer to a range of memory at least `len` bytes long 




**Post**

`msg` is filled with packed action data 




## Defines Documentation

### define <a id="ga7c267f408db88d60ce0a5c74845596ee" href="#ga7c267f408db88d60ce0a5c74845596ee">SEND\_INLINE\_ACTION</a>

```cpp
define SEND_INLINE_ACTION;
```

Send inline action. 

Send inline action


**Parameters:**


* **CONTRACT** - The account this action is intended for 
* **NAME** - The name of the action 
* **...** - The member of the action specified as ("action\_member1\_name", action\_member1\_value)("action\_member2\_name", action\_member2\_value) 



### define <a id="ga7c267f408db88d60ce0a5c74845596ee" href="#ga7c267f408db88d60ce0a5c74845596ee">SEND\_INLINE\_ACTION</a>

```cpp
define SEND_INLINE_ACTION;
```

Send inline action. 

Send inline action


**Parameters:**


* **CONTRACT** - The account this action is intended for 
* **NAME** - The name of the action 
* **...** - The member of the action specified as ("action\_member1\_name", action\_member1\_value)("action\_member2\_name", action\_member2\_value) 



