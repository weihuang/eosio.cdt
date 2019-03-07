---
search:
    keywords: ['eosio::binary_extension', 'value_type', 'value_type', 'binary_extension', 'binary_extension', 'binary_extension', '~binary_extension', 'binary_extension', 'binary_extension', 'operator bool', 'has_value', 'value', 'value', 'binary_extension', 'binary_extension', 'binary_extension', 'binary_extension', '~binary_extension', 'binary_extension', 'binary_extension', 'operator bool', 'has_value', 'value', 'value', 'value_or', 'value_or', 'value_or', 'value_or', 'value_or', 'operator->', 'operator->', 'operator*', 'operator*', 'operator*', 'operator*', 'emplace', 'reset', 'operator<<', 'operator>>']
---

# class eosio::binary\_extension

[**Class List**](annotated.md) **>** [**eosio**](namespaceeosio.md) **::** [**binary\_extension**](classeosio_1_1binary__extension.md)


container to hold a binary payload for an extension [More...](#detailed-description)
## Public Types

|Type|Name|
|-----|-----|
|typedef T|[**value\_type**](group__binary__extension_gaa084533536dc9c6d93c18bb768693f5e.md#gaa084533536dc9c6d93c18bb768693f5e)|
|typedef T|[**value\_type**](classeosio_1_1binary__extension_aa084533536dc9c6d93c18bb768693f5e.md#1aa084533536dc9c6d93c18bb768693f5e)|


## Public Functions

|Type|Name|
|-----|-----|
|constexpr|[**binary\_extension**](group__binary__extension_gaff379ea055c79318ba164ce9f871a709.md#gaff379ea055c79318ba164ce9f871a709) () |
|constexpr|[**binary\_extension**](group__binary__extension_gac52638fa326d6f52ac0e8d83d815437d.md#gac52638fa326d6f52ac0e8d83d815437d) (const T & ext) |
|constexpr|[**binary\_extension**](group__binary__extension_ga58313cf8b3f391babb7cc506d5bdc481.md#ga58313cf8b3f391babb7cc506d5bdc481) (T && ext) |
||[**~binary\_extension**](group__binary__extension_gab083c45d69ee7dfb13bd81281592ecdc.md#gab083c45d69ee7dfb13bd81281592ecdc) () |
|constexpr|[**binary\_extension**](group__binary__extension_ga453374ab5566b6af3d2b6a7234e4b09d.md#ga453374ab5566b6af3d2b6a7234e4b09d) (const **[binary\_extension](classeosio_1_1binary__extension.md)** & other) |
|constexpr|[**binary\_extension**](group__binary__extension_ga57fabcc335deb107d70e901f454c388c.md#ga57fabcc335deb107d70e901f454c388c) (**[binary\_extension](classeosio_1_1binary__extension.md)** && other) |
|constexpr|[**operator bool**](group__binary__extension_ga509872ec08d9f16560137272f8441b9a.md#ga509872ec08d9f16560137272f8441b9a) () const |
|constexpr bool|[**has\_value**](group__binary__extension_gaf17d219f00e16c0f41ab4a01827e4677.md#gaf17d219f00e16c0f41ab4a01827e4677) () const |
|constexpr T &|[**value**](group__binary__extension_gac1549fd6386dfe602bc19b13cb0d53e6.md#gac1549fd6386dfe602bc19b13cb0d53e6) () |
|constexpr const T &|[**value**](group__binary__extension_ga3b34242065f07ff5aff8688aeae4f3e6.md#ga3b34242065f07ff5aff8688aeae4f3e6) () const |
|constexpr|[**binary\_extension**](classeosio_1_1binary__extension_aff379ea055c79318ba164ce9f871a709.md#1aff379ea055c79318ba164ce9f871a709) () |
|constexpr|[**binary\_extension**](classeosio_1_1binary__extension_ac52638fa326d6f52ac0e8d83d815437d.md#1ac52638fa326d6f52ac0e8d83d815437d) (const T & ext) |
|constexpr|[**binary\_extension**](classeosio_1_1binary__extension_a58313cf8b3f391babb7cc506d5bdc481.md#1a58313cf8b3f391babb7cc506d5bdc481) (T && ext) |
|constexpr|[**binary\_extension**](classeosio_1_1binary__extension_a3f340da19a1ac4740161477cfeac5bc9.md#1a3f340da19a1ac4740161477cfeac5bc9) (std::in\_place\_t, Args &&... args) |
||[**~binary\_extension**](classeosio_1_1binary__extension_ab083c45d69ee7dfb13bd81281592ecdc.md#1ab083c45d69ee7dfb13bd81281592ecdc) () |
|constexpr|[**binary\_extension**](classeosio_1_1binary__extension_a453374ab5566b6af3d2b6a7234e4b09d.md#1a453374ab5566b6af3d2b6a7234e4b09d) (const **[binary\_extension](classeosio_1_1binary__extension.md)** & other) |
|constexpr|[**binary\_extension**](classeosio_1_1binary__extension_a57fabcc335deb107d70e901f454c388c.md#1a57fabcc335deb107d70e901f454c388c) (**[binary\_extension](classeosio_1_1binary__extension.md)** && other) |
|constexpr|[**operator bool**](classeosio_1_1binary__extension_a509872ec08d9f16560137272f8441b9a.md#1a509872ec08d9f16560137272f8441b9a) () const |
|constexpr bool|[**has\_value**](classeosio_1_1binary__extension_af17d219f00e16c0f41ab4a01827e4677.md#1af17d219f00e16c0f41ab4a01827e4677) () const |
|constexpr T &|[**value**](classeosio_1_1binary__extension_ac1549fd6386dfe602bc19b13cb0d53e6.md#1ac1549fd6386dfe602bc19b13cb0d53e6) () |
|constexpr const T &|[**value**](classeosio_1_1binary__extension_a3b34242065f07ff5aff8688aeae4f3e6.md#1a3b34242065f07ff5aff8688aeae4f3e6) () const |
|constexpr auto|[**value\_or**](classeosio_1_1binary__extension_a7b7483a765dc3c7ef3e7fa573e58f14b.md#1a7b7483a765dc3c7ef3e7fa573e58f14b) (U && def) |
|constexpr T &&|[**value\_or**](classeosio_1_1binary__extension_ad40323a70f6e0a76ae50dbff6c35a6e7.md#1ad40323a70f6e0a76ae50dbff6c35a6e7) () |
|constexpr const T &&|[**value\_or**](classeosio_1_1binary__extension_a77d4c7d065379555450ab6dec2fad0bd.md#1a77d4c7d065379555450ab6dec2fad0bd) () const |
|constexpr T|[**value\_or**](classeosio_1_1binary__extension_aa592de5809b1b5572f7e498d54bf33a9.md#1aa592de5809b1b5572f7e498d54bf33a9) () |
|constexpr T|[**value\_or**](classeosio_1_1binary__extension_a5b0bf14baafaa300bf0ec58db2c8d2e4.md#1a5b0bf14baafaa300bf0ec58db2c8d2e4) () const |
|constexpr T \*|[**operator->**](classeosio_1_1binary__extension_aad0874cf9bfb4d648b3f29731b8164f2.md#1aad0874cf9bfb4d648b3f29731b8164f2) () |
|constexpr const T \*|[**operator->**](classeosio_1_1binary__extension_a902fe8d07c51183c7aa14937aa5a72fd.md#1a902fe8d07c51183c7aa14937aa5a72fd) () const |
|constexpr T &|[**operator\***](classeosio_1_1binary__extension_af8dc37f44fb2e71cd6a04b4614d9fa8e.md#1af8dc37f44fb2e71cd6a04b4614d9fa8e) () |
|constexpr const T &|[**operator\***](classeosio_1_1binary__extension_ad514f56741cf7a83990a42b6edfe7ba6.md#1ad514f56741cf7a83990a42b6edfe7ba6) () const |
|constexpr const T &&|[**operator\***](classeosio_1_1binary__extension_a3839c7f2894bd1925be47a79862cc5c9.md#1a3839c7f2894bd1925be47a79862cc5c9) () const |
|constexpr T &&|[**operator\***](classeosio_1_1binary__extension_ae9bca54759dd58a35dbee4b3e7568554.md#1ae9bca54759dd58a35dbee4b3e7568554) () |
|T &|[**emplace**](classeosio_1_1binary__extension_aa17c473259bf845a13506e1f7c6129ed.md#1aa17c473259bf845a13506e1f7c6129ed) (Args &&... args) |
|void|[**reset**](classeosio_1_1binary__extension_a07fc73109549fea6b17570cc321763a0.md#1a07fc73109549fea6b17570cc321763a0) () |


## Friends

|Type|Name|
|-----|-----|
|friend DataStream &|[**operator<<**](group__binary__extension_gaa6e0069ffb2897750bd8b6d879eb7ca7.md#gaa6e0069ffb2897750bd8b6d879eb7ca7)<br>Serialize a **[binary\_extension](classeosio_1_1binary__extension.md)**. |
|friend DataStream &|[**operator>>**](group__binary__extension_ga79a5aa5f3ca553d29d1411a33aec02a0.md#ga79a5aa5f3ca553d29d1411a33aec02a0)<br>Deserialize a **[binary\_extension](classeosio_1_1binary__extension.md)**. |


## Detailed Description

Binary Extension 

**Template parameters:**


* **T** - Contained typed

Container to hold a binary payload for an extension


**Template parameters:**


* **T** - Contained typed 


## Public Types Documentation

### typedef <a id="gaa084533536dc9c6d93c18bb768693f5e" href="#gaa084533536dc9c6d93c18bb768693f5e">value\_type</a>

```cpp
using eosio::binary_extension< T >::value_type =  T;
```



### typedef <a id="1aa084533536dc9c6d93c18bb768693f5e" href="#1aa084533536dc9c6d93c18bb768693f5e">value\_type (2/2)</a>

```cpp
using eosio::binary_extension< T >::value_type =  T;
```



## Public Functions Documentation

### function <a id="gaff379ea055c79318ba164ce9f871a709" href="#gaff379ea055c79318ba164ce9f871a709">binary\_extension</a>

```cpp
constexpr eosio::binary_extension::binary_extension ()
```



### function <a id="gac52638fa326d6f52ac0e8d83d815437d" href="#gac52638fa326d6f52ac0e8d83d815437d">binary\_extension</a>

```cpp
constexpr eosio::binary_extension::binary_extension (
    const T & ext
)
```



### function <a id="ga58313cf8b3f391babb7cc506d5bdc481" href="#ga58313cf8b3f391babb7cc506d5bdc481">binary\_extension</a>

```cpp
constexpr eosio::binary_extension::binary_extension (
    T && ext
)
```



### function <a id="gab083c45d69ee7dfb13bd81281592ecdc" href="#gab083c45d69ee7dfb13bd81281592ecdc">~binary\_extension</a>

```cpp
eosio::binary_extension::~binary_extension ()
```



### function <a id="ga453374ab5566b6af3d2b6a7234e4b09d" href="#ga453374ab5566b6af3d2b6a7234e4b09d">binary\_extension</a>

```cpp
constexpr eosio::binary_extension::binary_extension (
    const binary_extension & other
)
```



### function <a id="ga57fabcc335deb107d70e901f454c388c" href="#ga57fabcc335deb107d70e901f454c388c">binary\_extension</a>

```cpp
constexpr eosio::binary_extension::binary_extension (
    binary_extension && other
)
```



### function <a id="ga509872ec08d9f16560137272f8441b9a" href="#ga509872ec08d9f16560137272f8441b9a">operator bool</a>

```cpp
explicit constexpr eosio::binary_extension::operator bool () const
```


test if container is holding a value 

### function <a id="gaf17d219f00e16c0f41ab4a01827e4677" href="#gaf17d219f00e16c0f41ab4a01827e4677">has\_value</a>

```cpp
constexpr bool eosio::binary_extension::has_value () const
```


test if container is holding a value 

### function <a id="gac1549fd6386dfe602bc19b13cb0d53e6" href="#gac1549fd6386dfe602bc19b13cb0d53e6">value</a>

```cpp
constexpr T & eosio::binary_extension::value ()
```


get the contained value 

### function <a id="ga3b34242065f07ff5aff8688aeae4f3e6" href="#ga3b34242065f07ff5aff8688aeae4f3e6">value</a>

```cpp
constexpr const T & eosio::binary_extension::value () const
```


get the contained value 

### function <a id="1aff379ea055c79318ba164ce9f871a709" href="#1aff379ea055c79318ba164ce9f871a709">binary\_extension (6/11)</a>

```cpp
constexpr eosio::binary_extension::binary_extension ()
```



### function <a id="1ac52638fa326d6f52ac0e8d83d815437d" href="#1ac52638fa326d6f52ac0e8d83d815437d">binary\_extension (7/11)</a>

```cpp
constexpr eosio::binary_extension::binary_extension (
    const T & ext
)
```



### function <a id="1a58313cf8b3f391babb7cc506d5bdc481" href="#1a58313cf8b3f391babb7cc506d5bdc481">binary\_extension (8/11)</a>

```cpp
constexpr eosio::binary_extension::binary_extension (
    T && ext
)
```



### function <a id="1a3f340da19a1ac4740161477cfeac5bc9" href="#1a3f340da19a1ac4740161477cfeac5bc9">binary\_extension (9/11)</a>

```cpp
constexpr eosio::binary_extension::binary_extension (
    std::in_place_t ,
    Args &&... args
)
```


construct contained type in place 

### function <a id="1ab083c45d69ee7dfb13bd81281592ecdc" href="#1ab083c45d69ee7dfb13bd81281592ecdc">~binary\_extension (2/2)</a>

```cpp
eosio::binary_extension::~binary_extension ()
```



### function <a id="1a453374ab5566b6af3d2b6a7234e4b09d" href="#1a453374ab5566b6af3d2b6a7234e4b09d">binary\_extension (10/11)</a>

```cpp
constexpr eosio::binary_extension::binary_extension (
    const binary_extension & other
)
```



### function <a id="1a57fabcc335deb107d70e901f454c388c" href="#1a57fabcc335deb107d70e901f454c388c">binary\_extension (11/11)</a>

```cpp
constexpr eosio::binary_extension::binary_extension (
    binary_extension && other
)
```



### function <a id="1a509872ec08d9f16560137272f8441b9a" href="#1a509872ec08d9f16560137272f8441b9a">operator bool (2/2)</a>

```cpp
explicit constexpr eosio::binary_extension::operator bool () const
```


test if container is holding a value 

### function <a id="1af17d219f00e16c0f41ab4a01827e4677" href="#1af17d219f00e16c0f41ab4a01827e4677">has\_value (2/2)</a>

```cpp
constexpr bool eosio::binary_extension::has_value () const
```


test if container is holding a value 

### function <a id="1ac1549fd6386dfe602bc19b13cb0d53e6" href="#1ac1549fd6386dfe602bc19b13cb0d53e6">value (3/4)</a>

```cpp
constexpr T & eosio::binary_extension::value ()
```


get the contained value 

### function <a id="1a3b34242065f07ff5aff8688aeae4f3e6" href="#1a3b34242065f07ff5aff8688aeae4f3e6">value (4/4)</a>

```cpp
constexpr const T & eosio::binary_extension::value () const
```


get the contained value 

### function <a id="1a7b7483a765dc3c7ef3e7fa573e58f14b" href="#1a7b7483a765dc3c7ef3e7fa573e58f14b">value\_or (1/5)</a>

```cpp
constexpr auto eosio::binary_extension::value_or (
    U && def
)
```


get the contained value or a user specified default 

**Precondition:**

def should be convertible to type T 




### function <a id="1ad40323a70f6e0a76ae50dbff6c35a6e7" href="#1ad40323a70f6e0a76ae50dbff6c35a6e7">value\_or (2/5)</a>

```cpp
constexpr T && eosio::binary_extension::value_or ()
```



### function <a id="1a77d4c7d065379555450ab6dec2fad0bd" href="#1a77d4c7d065379555450ab6dec2fad0bd">value\_or (3/5)</a>

```cpp
constexpr const T && eosio::binary_extension::value_or () const
```



### function <a id="1aa592de5809b1b5572f7e498d54bf33a9" href="#1aa592de5809b1b5572f7e498d54bf33a9">value\_or (4/5)</a>

```cpp
constexpr T eosio::binary_extension::value_or ()
```



### function <a id="1a5b0bf14baafaa300bf0ec58db2c8d2e4" href="#1a5b0bf14baafaa300bf0ec58db2c8d2e4">value\_or (5/5)</a>

```cpp
constexpr T eosio::binary_extension::value_or () const
```



### function <a id="1aad0874cf9bfb4d648b3f29731b8164f2" href="#1aad0874cf9bfb4d648b3f29731b8164f2">operator-> (1/2)</a>

```cpp
constexpr T * eosio::binary_extension::operator-> ()
```



### function <a id="1a902fe8d07c51183c7aa14937aa5a72fd" href="#1a902fe8d07c51183c7aa14937aa5a72fd">operator-> (2/2)</a>

```cpp
constexpr const T * eosio::binary_extension::operator-> () const
```



### function <a id="1af8dc37f44fb2e71cd6a04b4614d9fa8e" href="#1af8dc37f44fb2e71cd6a04b4614d9fa8e">operator\* (1/4)</a>

```cpp
constexpr T & eosio::binary_extension::operator* ()
```



### function <a id="1ad514f56741cf7a83990a42b6edfe7ba6" href="#1ad514f56741cf7a83990a42b6edfe7ba6">operator\* (2/4)</a>

```cpp
constexpr const T & eosio::binary_extension::operator* () const
```



### function <a id="1a3839c7f2894bd1925be47a79862cc5c9" href="#1a3839c7f2894bd1925be47a79862cc5c9">operator\* (3/4)</a>

```cpp
constexpr const T && eosio::binary_extension::operator* () const
```



### function <a id="1ae9bca54759dd58a35dbee4b3e7568554" href="#1ae9bca54759dd58a35dbee4b3e7568554">operator\* (4/4)</a>

```cpp
constexpr T && eosio::binary_extension::operator* ()
```



### function <a id="1aa17c473259bf845a13506e1f7c6129ed" href="#1aa17c473259bf845a13506e1f7c6129ed">emplace</a>

```cpp
T & eosio::binary_extension::emplace (
    Args &&... args
)
```



### function <a id="1a07fc73109549fea6b17570cc321763a0" href="#1a07fc73109549fea6b17570cc321763a0">reset</a>

```cpp
void eosio::binary_extension::reset ()
```



## Friends Documentation

### friend <a id="gaa6e0069ffb2897750bd8b6d879eb7ca7" href="#gaa6e0069ffb2897750bd8b6d879eb7ca7">operator<<</a>

```cpp
friend DataStream & eosio::binary_extension::operator<< (
    DataStream & ds,
    const eosio::binary_extension< T > & be
)
```

Serialize a **[binary\_extension](classeosio_1_1binary__extension.md)**. 

Serialize a **[binary\_extension](classeosio_1_1binary__extension.md)** into a stream


**Parameters:**


* **ds** - The stream to write 
* **opt** - The value to serialize 



**Template parameters:**


* **DataStream** - Type of datastream buffer 



**Returns:**

DataStream& - Reference to the datastream 




### friend <a id="ga79a5aa5f3ca553d29d1411a33aec02a0" href="#ga79a5aa5f3ca553d29d1411a33aec02a0">operator>></a>

```cpp
friend DataStream & eosio::binary_extension::operator>> (
    DataStream & ds,
    eosio::binary_extension< T > & be
)
```

Deserialize a **[binary\_extension](classeosio_1_1binary__extension.md)**. 

Deserialize a **[binary\_extension](classeosio_1_1binary__extension.md)** from a stream


**Parameters:**


* **ds** - The stream to read 
* **opt** - The destination for deserialized value 



**Template parameters:**


* **DataStream** - Type of datastream buffer 



**Returns:**

DataStream& - Reference to the datastream 






----------------------------------------
The documentation for this class was generated from the following file: `in/eosio.cdt/libraries/eosiolib/binary\_extension.hpp`
