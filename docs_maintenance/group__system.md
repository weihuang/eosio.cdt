---
search:
    keywords: ['system', 'eosio_exit', 'current_time_point', 'current_block_time', 'check', 'check', 'check', 'check', 'check', 'check']
---

# group system

Defines wrappers over eosio\_assert. [More...](#detailed-description)
## Detailed Description

Defines time related functions and eosio\_exit.
## Functions Documentation

### function <a id="ga956ded6d541ae9e454b446f0d5d0b24c" href="#ga956ded6d541ae9e454b446f0d5d0b24c">eosio\_exit</a>

```cpp
void system::eosio_exit (
    int32_t code
)
```


This method will abort execution of wasm without failing the contract. This is used to bypass all cleanup / destructors that would normally be called.


**Parameters:**


* **code** - the exit code Example:


```cpp
eosio_exit(0);
eosio_exit(1);
eosio_exit(2);
eosio_exit(3);
```

 

### function <a id="gad5f4701ab1b418fe1f1558e199047e35" href="#gad5f4701ab1b418fe1f1558e199047e35">current\_time\_point</a>

```cpp
time_point system::current_time_point ()
```


Returns the time in microseconds from 1970 of the current block as a **[time\_point](classeosio_1_1time__point.md)**


**Returns:**

time in microseconds from 1970 of the current block as a **[time\_point](classeosio_1_1time__point.md)** 




### function <a id="gada0c9f4292996498bc781f2f52255086" href="#gada0c9f4292996498bc781f2f52255086">current\_block\_time</a>

```cpp
block_timestamp system::current_block_time ()
```


Returns the time in microseconds from 1970 of the current block as a **[block\_timestamp](classeosio_1_1block__timestamp.md)**


**Returns:**

time in microseconds from 1970 of the current block as a **[block\_timestamp](classeosio_1_1block__timestamp.md)** 




### function <a id="ga919983993e7c2b18dcb253e3a8ef33e4" href="#ga919983993e7c2b18dcb253e3a8ef33e4">check</a>

```cpp
void system::check (
    bool pred,
    const char * msg
)
```

Assert if the predicate fails and use the supplied message. 

Assert if the predicate fails and use the supplied message.
Example: 
```cpp
eosio::check(a == b, "a does not equal b");
```


Example:

```cpp
eosio::check(a == b, "a does not equal b");
```

 

### function <a id="gaaa7adb3f6c40df0e974eab5f84e1377b" href="#gaaa7adb3f6c40df0e974eab5f84e1377b">check</a>

```cpp
void system::check (
    bool pred,
    const std::string & msg
)
```

Assert if the predicate fails and use the supplied message. 

Assert if the predicate fails and use the supplied message.
Example: 
```cpp
eosio::check(a == b, "a does not equal b");
```


Example:

```cpp
eosio::check(a == b, "a does not equal b");
```

 

### function <a id="ga61e4624ef8320a0d9918cf247df4df90" href="#ga61e4624ef8320a0d9918cf247df4df90">check</a>

```cpp
void system::check (
    bool pred,
    std::string && msg
)
```

Assert if the predicate fails and use the supplied message. 

Assert if the predicate fails and use the supplied message.
Example: 
```cpp
eosio::check(a == b, "a does not equal b");
```


Example:

```cpp
eosio::check(a == b, "a does not equal b");
```

 

### function <a id="gad245a249b8721374fe09819a00a86906" href="#gad245a249b8721374fe09819a00a86906">check</a>

```cpp
void system::check (
    bool pred,
    const char * msg,
    size_t n
)
```

Assert if the predicate fails and use a subset of the supplied message. 

Assert if the predicate fails and use a subset of the supplied message.
Example: 
```cpp
const char* msg = "a does not equal b b does not equal a";
eosio::check(a == b, "a does not equal b", 18);
```


Example:

```cpp
const char* msg = "a does not equal b b does not equal a";
eosio::check(a == b, "a does not equal b", 18);
```

 

### function <a id="ga076f987fe64de4738b5d2f4381150253" href="#ga076f987fe64de4738b5d2f4381150253">check</a>

```cpp
void system::check (
    bool pred,
    const std::string & msg,
    size_t n
)
```

Assert if the predicate fails and use a subset of the supplied message. 

Assert if the predicate fails and use a subset of the supplied message.
Example: 
```cpp
std::string msg = "a does not equal b b does not equal a";
eosio::check(a == b, msg, 18);
```


Example:

```cpp
std::string msg = "a does not equal b b does not equal a";
eosio::check(a == b, msg, 18);
```

 

### function <a id="ga2f6537af230517a619f07727f6ff33a5" href="#ga2f6537af230517a619f07727f6ff33a5">check</a>

```cpp
void system::check (
    bool pred,
    uint64_t code
)
```

Assert if the predicate fails and use the supplied error code. 

Assert if the predicate fails and use the supplied error code.
Example: 
```cpp
eosio::check(a == b, 13);
```


Example:

```cpp
eosio::check(a == b, 13);
```

 

