---
search:
    keywords: ['permission', 'check_transaction_authorization', 'check_permission_authorization', 'check_transaction_authorization', 'check_permission_authorization', 'get_permission_last_used', 'get_account_creation_time', 'check_permission_authorization']
---

# group permission

Defines C++ API functions for validating authorization of keys and permissions. 
## Functions Documentation

### function <a id="ga3bac3dbc3831ab54011cadc35887d67b" href="#ga3bac3dbc3831ab54011cadc35887d67b">check\_transaction\_authorization</a>

```cpp
bool permission::check_transaction_authorization (
    const char * trx_data,
    uint32_t trx_size,
    const char * pubkeys_data,
    uint32_t pubkeys_size,
    const char * perms_data,
    uint32_t perms_size
)
```


Checks if a transaction is authorized by a provided set of keys and permissions


**Parameters:**


* **trx\_data** - pointer to the start of the serialized transaction 
* **trx\_size** - size (in bytes) of the serialized transaction 
* **pubkeys\_data** - pointer to the start of the serialized vector of provided public keys 
* **pubkeys\_size** - size (in bytes) of serialized vector of provided public keys (can be 0 if no public keys are to be provided) 
* **perms\_data** - pointer to the start of the serialized vector of provided permissions (empty permission name acts as wildcard) 
* **perms\_size** - size (in bytes) of the serialized vector of provided permissions



**Returns:**

1 if the transaction is authorized, 0 otherwise 




### function <a id="ga3fc232818f6a205152fdde6a2d79bae9" href="#ga3fc232818f6a205152fdde6a2d79bae9">check\_permission\_authorization</a>

```cpp
bool permission::check_permission_authorization (
    name account,
    name permission,
    const char * pubkeys_data,
    uint32_t pubkeys_size,
    const char * perms_data,
    uint32_t perms_size,
    microseconds delay
)
```


Checks if a permission is authorized by a provided delay and a provided set of keys and permissions


**Parameters:**


* **account** - the account owner of the permission 
* **permission** - the name of the permission to check for authorization 
* **pubkeys\_data** - pointer to the start of the serialized vector of provided public keys 
* **pubkeys\_size** - size (in bytes) of serialized vector of provided public keys (can be 0 if no public keys are to be provided) 
* **perms\_data** - pointer to the start of the serialized vector of provided permissions (empty permission name acts as wildcard) 
* **perms\_size** - size (in bytes) of the serialized vector of provided permissions 
* **delay** - the provided delay in microseconds (cannot exceed INT64\_MAX)



**Returns:**

1 if the permission is authorized, 0 otherwise 




### function <a id="gad879334b66c1201b982eda5a4fea9507" href="#gad879334b66c1201b982eda5a4fea9507">check\_transaction\_authorization</a>

```cpp
bool permission::check_transaction_authorization (
    const transaction & trx,
    const std::set< permission_level > & provided_permissions,
    const std::set< public_key > & provided_keys = std::set< public_key >()
)
```


Checks if a transaction is authorized by a provided set of keys and permissions


**Parameters:**


* **trx** - the transaction for which to check authorizations 
* **provided\_permissions** - the set of permissions which have authorized the transaction (empty permission name acts as wildcard) 
* **provided\_keys** - the set of public keys which have authorized the transaction



**Returns:**

whether the transaction was authorized by provided keys and permissions 




### function <a id="ga65205f2db4d6b58737c21bdc9903e072" href="#ga65205f2db4d6b58737c21bdc9903e072">check\_permission\_authorization</a>

```cpp
bool permission::check_permission_authorization (
    name account,
    name permission,
    const std::set< public_key > & provided_keys,
    const std::set< permission_level > & provided_permissions = std::set< permission_level >(),
    microseconds provided_delay = microseconds{std::numeric_limits< int64_t >::max()}
)
```


Checks if a permission is authorized by a provided delay and a provided set of keys and permissions


**Parameters:**


* **account** - the account owner of the permission 
* **permission** - the permission name to check for authorization 
* **provided\_keys** - the set of public keys which have authorized the transaction 
* **provided\_permissions** - the set of permissions which have authorized the transaction (empty permission name acts as wildcard) 
* **provided\_delay\_us** - the provided delay in microseconds (cannot exceed INT64\_MAX)



**Returns:**

whether the permission was authorized by provided delay, keys, and permissions 




### function <a id="ga2025798b7368abb43d630ea75fd15f2b" href="#ga2025798b7368abb43d630ea75fd15f2b">get\_permission\_last\_used</a>

```cpp
time_point permission::get_permission_last_used (
    name account,
    name permission
)
```


Returns the last used time of a permission


**Parameters:**


* **account** - the account owner of the permission 
* **permission** - the name of the permission



**Returns:**

the last used time (in microseconds since Unix epoch) of the permission 




### function <a id="ga64dacb7e28cef77af895783dd1b8b376" href="#ga64dacb7e28cef77af895783dd1b8b376">get\_account\_creation\_time</a>

```cpp
time_point permission::get_account_creation_time (
    name account
)
```


Returns the creation time of an account


**Parameters:**


* **account** - the account



**Returns:**

the creation time (in microseconds since Unix epoch) of the account 




### function <a id="ga2ded7b51e4363cd7634070612add2e99" href="#ga2ded7b51e4363cd7634070612add2e99">check\_permission\_authorization</a>

```cpp
bool permission::check_permission_authorization (
    name account,
    name permission,
    const std::set< public_key > & provided_keys,
    const std::set< permission_level > & provided_permissions = std::set< permission_level >(),
    uint64_t provided_delay_us = static_cast< uint64_t >(std::numeric_limits< int64_t >::max())
)
```


Checks if a permission is authorized by a provided delay and a provided set of keys and permissions


**Parameters:**


* **account** - the account owner of the permission 
* **permission** - the permission name to check for authorization 
* **provided\_keys** - the set of public keys which have authorized the transaction 
* **provided\_permissions** - the set of permissions which have authorized the transaction (empty permission name acts as wildcard) 
* **provided\_delay\_us** - the provided delay in microseconds (cannot exceed INT64\_MAX)



**Returns:**

whether the permission was authorized by provided delay, keys, and permissions 




