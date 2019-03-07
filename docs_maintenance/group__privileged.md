---
search:
    keywords: ['privileged', 'eosio::blockchain_parameters', 'set_blockchain_parameters', 'get_blockchain_parameters', 'get_resource_limits', 'set_resource_limits', 'set_proposed_producers', 'is_privileged', 'set_privileged']
---

# group privileged

Defines C++ Privileged API. [More...](#detailed-description)
## Classes

|Type|Name|
|-----|-----|
|struct|[**eosio::blockchain\_parameters**](structeosio_1_1blockchain__parameters.md)|


## Detailed Description

Defines C++ Privileged API 
## Functions Documentation

### function <a id="ga4b6f34ade1f06f6583b4a17738bebe0c" href="#ga4b6f34ade1f06f6583b4a17738bebe0c">set\_blockchain\_parameters</a>

```cpp
void privileged::set_blockchain_parameters (
    const eosio::blockchain_parameters & params
)
```

Set the blockchain parameters Set the blockchain parameters. 

Set the blockchain parameters


**Parameters:**


* **params** - New blockchain parameters to set
* **params** - New blockchain parameters to set 



### function <a id="ga673da670d201ba73461eedd8bd1aec8f" href="#ga673da670d201ba73461eedd8bd1aec8f">get\_blockchain\_parameters</a>

```cpp
void privileged::get_blockchain_parameters (
    eosio::blockchain_parameters & params
)
```

Retrieve the blolckchain parameters Retrieve the blolckchain parameters. 

Retrieve the blolckchain parameters


**Parameters:**


* **params** - It will be replaced with the retrieved blockchain params
* **params** - It will be replaced with the retrieved blockchain params 



### function <a id="gab80245def6eafc07e7eff5207f604261" href="#gab80245def6eafc07e7eff5207f604261">get\_resource\_limits</a>

```cpp
void privileged::get_resource_limits (
    name account,
    int64_t & ram_bytes,
    int64_t & net_weight,
    int64_t & cpu_weight
)
```


Get the resource limits of an account


**Parameters:**


* **account** - name of the account whose resource limit to get 
* **ram\_bytes** - output to hold retrieved ram limit in absolute bytes 
* **net\_weight** - output to hold net limit 
* **cpu\_weight** - output to hold cpu limit 



### function <a id="gaad97a90662dc91cc1f9c6b2368b625c3" href="#gaad97a90662dc91cc1f9c6b2368b625c3">set\_resource\_limits</a>

```cpp
void privileged::set_resource_limits (
    name account,
    int64_t ram_bytes,
    int64_t net_weight,
    int64_t cpu_weight
)
```


Set the resource limits of an account


**Parameters:**


* **account** - name of the account whose resource limit to be set 
* **ram\_bytes** - ram limit in absolute bytes 
* **net\_weight** - fractionally proportionate net limit of available resources based on (weight / total\_weight\_of\_all\_accounts) 
* **cpu\_weight** - fractionally proportionate cpu limit of available resources based on (weight / total\_weight\_of\_all\_accounts) 



### function <a id="gad7eb659e7f0bbfd315a9c8fd0fc492b0" href="#gad7eb659e7f0bbfd315a9c8fd0fc492b0">set\_proposed\_producers</a>

```cpp
std::optional< uint64_t > privileged::set_proposed_producers (
    const std::vector< producer_key > & prods
)
```


Proposes a schedule change


**Note:**

Once the block that contains the proposal becomes irreversible, the schedule is promoted to "pending" automatically. Once the block that promotes the schedule is irreversible, the schedule will become "active" 




**Parameters:**


* **producers** - vector of producer keys



**Returns:**

an optional value of the version of the new proposed schedule if successful 




### function <a id="gad2eb8389a1197594476ea9e41448481a" href="#gad2eb8389a1197594476ea9e41448481a">is\_privileged</a>

```cpp
bool privileged::is_privileged (
    name account
)
```


Check if an account is privileged


**Parameters:**


* **account** - name of the account to be checked 



**Returns:**

true if the account is privileged 




**Returns:**

false if the account is not privileged 




### function <a id="gab341227b30ff1294ecb03c540e25a57f" href="#gab341227b30ff1294ecb03c540e25a57f">set\_privileged</a>

```cpp
void privileged::set_privileged (
    name account,
    bool is_priv
)
```


Set the privileged status of an account


**Parameters:**


* **account** - name of the account whose privileged account to be set 
* **is\_priv** - privileged status 



