---
search:
    keywords: ['eosio::unsigned_int', 'value', 'unsigned_int', 'unsigned_int', 'operator T', 'operator=', 'operator==', 'operator==', 'operator==', 'operator!=', 'operator!=', 'operator!=', 'operator<', 'operator<', 'operator<', 'operator>=', 'operator>=', 'operator>=', 'operator<<', 'operator>>']
---

# struct eosio::unsigned\_int

[**Class List**](annotated.md) **>** [**eosio**](namespaceeosio.md) **::** [**unsigned\_int**](structeosio_1_1unsigned__int.md)


## Public Attributes

|Type|Name|
|-----|-----|
|uint32\_t|[**value**](structeosio_1_1unsigned__int_ae77bf5565f5fd33b99d944a78195185b.md#1ae77bf5565f5fd33b99d944a78195185b)|


## Public Functions

|Type|Name|
|-----|-----|
||[**unsigned\_int**](structeosio_1_1unsigned__int_a700e9397eb3767cb0bbb1dabe45b9869.md#1a700e9397eb3767cb0bbb1dabe45b9869) (uint32\_t v = 0) |
||[**unsigned\_int**](structeosio_1_1unsigned__int_a09d1f8dfec0c3fa1891c8705258f919e.md#1a09d1f8dfec0c3fa1891c8705258f919e) (T v) |
||[**operator T**](structeosio_1_1unsigned__int_a1f7ef7a6587e710c1b6c5d7b51e27c7d.md#1a1f7ef7a6587e710c1b6c5d7b51e27c7d) () const |
|**[unsigned\_int](structeosio_1_1unsigned__int.md)** &|[**operator=**](structeosio_1_1unsigned__int_a4ea3ba82865475337383e3ce5c758eb5.md#1a4ea3ba82865475337383e3ce5c758eb5) (uint32\_t v) |


## Friends

|Type|Name|
|-----|-----|
|friend bool|[**operator==**](structeosio_1_1unsigned__int_a08687d9bd50d9dec64808a19580f2a47.md#1a08687d9bd50d9dec64808a19580f2a47)|
|friend bool|[**operator==**](structeosio_1_1unsigned__int_a8c6aae02c0e6500d98d56544b4c49da0.md#1a8c6aae02c0e6500d98d56544b4c49da0)|
|friend bool|[**operator==**](structeosio_1_1unsigned__int_add87b4023be256deec5ac1afe4faf17c.md#1add87b4023be256deec5ac1afe4faf17c)|
|friend bool|[**operator!=**](structeosio_1_1unsigned__int_a53410718318d48dd4e6279103b351663.md#1a53410718318d48dd4e6279103b351663)|
|friend bool|[**operator!=**](structeosio_1_1unsigned__int_a1f618b0b2975a066c658435fb7eca0f9.md#1a1f618b0b2975a066c658435fb7eca0f9)|
|friend bool|[**operator!=**](structeosio_1_1unsigned__int_a897385977d9c06e539a1c19dbdffb5ec.md#1a897385977d9c06e539a1c19dbdffb5ec)|
|friend bool|[**operator<**](structeosio_1_1unsigned__int_a1ff316df3fa8ffdc0886d48e4d50e7f2.md#1a1ff316df3fa8ffdc0886d48e4d50e7f2)|
|friend bool|[**operator<**](structeosio_1_1unsigned__int_a9672c0a7766d6491003103052ddc692b.md#1a9672c0a7766d6491003103052ddc692b)|
|friend bool|[**operator<**](structeosio_1_1unsigned__int_a5c44ed2d978a1bdaf65166f98592192c.md#1a5c44ed2d978a1bdaf65166f98592192c)|
|friend bool|[**operator>=**](structeosio_1_1unsigned__int_abf1274ffb924723bc12f17544159c799.md#1abf1274ffb924723bc12f17544159c799)|
|friend bool|[**operator>=**](structeosio_1_1unsigned__int_ad6f6d75188bb59e24af40ff8aa4de947.md#1ad6f6d75188bb59e24af40ff8aa4de947)|
|friend bool|[**operator>=**](structeosio_1_1unsigned__int_aedda267438195592daa499b41727101a.md#1aedda267438195592daa499b41727101a)|
|friend DataStream &|[**operator<<**](structeosio_1_1unsigned__int_a3df4fdc722c22ec765f68db19116266e.md#1a3df4fdc722c22ec765f68db19116266e)|
|friend DataStream &|[**operator>>**](structeosio_1_1unsigned__int_a63b42b42b55b512f25e5fc9ec6e20787.md#1a63b42b42b55b512f25e5fc9ec6e20787)|


## Detailed Description

Variable Length Unsigned Integer. This provides more efficient serialization of 32-bit unsigned int. It serialuzes a 32-bit unsigned integer in as few bytes as possible `varuint32` is unsigned and uses [VLQ or Base-128 encoding](https://en.wikipedia.org/wiki/Variable-length_quantity) 
## Public Attributes Documentation

### variable <a id="1ae77bf5565f5fd33b99d944a78195185b" href="#1ae77bf5565f5fd33b99d944a78195185b">value</a>

```cpp
uint32_t eosio::unsigned_int::value;
```


Contained value 

## Public Functions Documentation

### function <a id="1a700e9397eb3767cb0bbb1dabe45b9869" href="#1a700e9397eb3767cb0bbb1dabe45b9869">unsigned\_int (1/2)</a>

```cpp
eosio::unsigned_int::unsigned_int (
    uint32_t v = 0
)
```


Construct a new unsigned int object


**Parameters:**


* **v** - Source 



### function <a id="1a09d1f8dfec0c3fa1891c8705258f919e" href="#1a09d1f8dfec0c3fa1891c8705258f919e">unsigned\_int (2/2)</a>

```cpp
eosio::unsigned_int::unsigned_int (
    T v
)
```


Construct a new unsigned int object from a type that is convertible to uint32\_t


**Template parameters:**


* **T** - Type of the source 



**Parameters:**


* **v** - Source 



**Precondition:**

T must be convertible to uint32\_t 




### function <a id="1a1f7ef7a6587e710c1b6c5d7b51e27c7d" href="#1a1f7ef7a6587e710c1b6c5d7b51e27c7d">operator T</a>

```cpp
eosio::unsigned_int::operator T () const
```


Convert **[unsigned\_int](structeosio_1_1unsigned__int.md)** as T


**Template parameters:**


* **T** - Target type of conversion 



**Returns:**

T - Converted target 




### function <a id="1a4ea3ba82865475337383e3ce5c758eb5" href="#1a4ea3ba82865475337383e3ce5c758eb5">operator=</a>

```cpp
unsigned_int & eosio::unsigned_int::operator= (
    uint32_t v
)
```


Assign 32-bit unsigned integer


**Parameters:**


* **v** - Soruce 



**Returns:**

**[unsigned\_int](structeosio_1_1unsigned__int.md)**& - Reference to this object 




## Friends Documentation

### friend <a id="1a08687d9bd50d9dec64808a19580f2a47" href="#1a08687d9bd50d9dec64808a19580f2a47">operator== (1/3)</a>

```cpp
friend bool eosio::unsigned_int::operator== (
    const unsigned_int & i,
    const uint32_t & v
)
```


Check equality between a **[unsigned\_int](structeosio_1_1unsigned__int.md)** object and 32-bit unsigned integer


**Parameters:**


* **i** - **[unsigned\_int](structeosio_1_1unsigned__int.md)** object to compare 
* **v** - 32-bit unsigned integer to compare 



**Returns:**

true - if equal 




**Returns:**

false - otherwise 




### friend <a id="1a8c6aae02c0e6500d98d56544b4c49da0" href="#1a8c6aae02c0e6500d98d56544b4c49da0">operator== (2/3)</a>

```cpp
friend bool eosio::unsigned_int::operator== (
    const uint32_t & i,
    const unsigned_int & v
)
```


Check equality between 32-bit unsigned integer and a **[unsigned\_int](structeosio_1_1unsigned__int.md)** object


**Parameters:**


* **i** - 32-bit unsigned integer to compare 
* **v** - **[unsigned\_int](structeosio_1_1unsigned__int.md)** object to compare 



**Returns:**

true - if equal 




**Returns:**

false - otherwise 




### friend <a id="1add87b4023be256deec5ac1afe4faf17c" href="#1add87b4023be256deec5ac1afe4faf17c">operator== (3/3)</a>

```cpp
friend bool eosio::unsigned_int::operator== (
    const unsigned_int & i,
    const unsigned_int & v
)
```


Check equality between two **[unsigned\_int](structeosio_1_1unsigned__int.md)** objects


**Parameters:**


* **i** - First **[unsigned\_int](structeosio_1_1unsigned__int.md)** object to compare 
* **v** - Second **[unsigned\_int](structeosio_1_1unsigned__int.md)** object to compare 



**Returns:**

true - if equal 




**Returns:**

false - otherwise 




### friend <a id="1a53410718318d48dd4e6279103b351663" href="#1a53410718318d48dd4e6279103b351663">operator!= (1/3)</a>

```cpp
friend bool eosio::unsigned_int::operator!= (
    const unsigned_int & i,
    const uint32_t & v
)
```


Check inequality between a **[unsigned\_int](structeosio_1_1unsigned__int.md)** object and 32-bit unsigned integer


**Parameters:**


* **i** - **[unsigned\_int](structeosio_1_1unsigned__int.md)** object to compare 
* **v** - 32-bit unsigned integer to compare 



**Returns:**

true - if inequal 




**Returns:**

false - otherwise 




### friend <a id="1a1f618b0b2975a066c658435fb7eca0f9" href="#1a1f618b0b2975a066c658435fb7eca0f9">operator!= (2/3)</a>

```cpp
friend bool eosio::unsigned_int::operator!= (
    const uint32_t & i,
    const unsigned_int & v
)
```


Check inequality between 32-bit unsigned integer and a **[unsigned\_int](structeosio_1_1unsigned__int.md)** object


**Parameters:**


* **i** - 32-bit unsigned integer to compare 
* **v** - **[unsigned\_int](structeosio_1_1unsigned__int.md)** object to compare 



**Returns:**

true - if unequal 




**Returns:**

false - otherwise 




### friend <a id="1a897385977d9c06e539a1c19dbdffb5ec" href="#1a897385977d9c06e539a1c19dbdffb5ec">operator!= (3/3)</a>

```cpp
friend bool eosio::unsigned_int::operator!= (
    const unsigned_int & i,
    const unsigned_int & v
)
```


Check inequality between two **[unsigned\_int](structeosio_1_1unsigned__int.md)** objects


**Parameters:**


* **i** - First **[unsigned\_int](structeosio_1_1unsigned__int.md)** object to compare 
* **v** - Second **[unsigned\_int](structeosio_1_1unsigned__int.md)** object to compare 



**Returns:**

true - if inequal 




**Returns:**

false - otherwise 




### friend <a id="1a1ff316df3fa8ffdc0886d48e4d50e7f2" href="#1a1ff316df3fa8ffdc0886d48e4d50e7f2">operator< (1/3)</a>

```cpp
friend bool eosio::unsigned_int::operator< (
    const unsigned_int & i,
    const uint32_t & v
)
```


Check if the given **[unsigned\_int](structeosio_1_1unsigned__int.md)** object is less than the given 32-bit unsigned integer


**Parameters:**


* **i** - **[unsigned\_int](structeosio_1_1unsigned__int.md)** object to compare 
* **v** - 32-bit unsigned integer to compare 



**Returns:**

true - if i less than v 




**Returns:**

false - otherwise 




### friend <a id="1a9672c0a7766d6491003103052ddc692b" href="#1a9672c0a7766d6491003103052ddc692b">operator< (2/3)</a>

```cpp
friend bool eosio::unsigned_int::operator< (
    const uint32_t & i,
    const unsigned_int & v
)
```


Check if the given 32-bit unsigned integer is less than the given **[unsigned\_int](structeosio_1_1unsigned__int.md)** object


**Parameters:**


* **i** - 32-bit unsigned integer to compare 
* **v** - **[unsigned\_int](structeosio_1_1unsigned__int.md)** object to compare 



**Returns:**

true - if i less than v 




**Returns:**

false - otherwise 




### friend <a id="1a5c44ed2d978a1bdaf65166f98592192c" href="#1a5c44ed2d978a1bdaf65166f98592192c">operator< (3/3)</a>

```cpp
friend bool eosio::unsigned_int::operator< (
    const unsigned_int & i,
    const unsigned_int & v
)
```


Check if the first given **[unsigned\_int](structeosio_1_1unsigned__int.md)** is less than the second given **[unsigned\_int](structeosio_1_1unsigned__int.md)** object


**Parameters:**


* **i** - First **[unsigned\_int](structeosio_1_1unsigned__int.md)** object to compare 
* **v** - Second **[unsigned\_int](structeosio_1_1unsigned__int.md)** object to compare 



**Returns:**

true - if i less than v 




**Returns:**

false - otherwise 




### friend <a id="1abf1274ffb924723bc12f17544159c799" href="#1abf1274ffb924723bc12f17544159c799">operator>= (1/3)</a>

```cpp
friend bool eosio::unsigned_int::operator>= (
    const unsigned_int & i,
    const uint32_t & v
)
```


Check if the given **[unsigned\_int](structeosio_1_1unsigned__int.md)** object is greater or equal to the given 32-bit unsigned integer


**Parameters:**


* **i** - **[unsigned\_int](structeosio_1_1unsigned__int.md)** object to compare 
* **v** - 32-bit unsigned integer to compare 



**Returns:**

true - if i is greater or equal to v 




**Returns:**

false - otherwise 




### friend <a id="1ad6f6d75188bb59e24af40ff8aa4de947" href="#1ad6f6d75188bb59e24af40ff8aa4de947">operator>= (2/3)</a>

```cpp
friend bool eosio::unsigned_int::operator>= (
    const uint32_t & i,
    const unsigned_int & v
)
```


Check if the given 32-bit unsigned integer is greater or equal to the given **[unsigned\_int](structeosio_1_1unsigned__int.md)** object


**Parameters:**


* **i** - 32-bit unsigned integer to compare 
* **v** - **[unsigned\_int](structeosio_1_1unsigned__int.md)** object to compare 



**Returns:**

true - if i is greater or equal to v 




**Returns:**

false - otherwise 




### friend <a id="1aedda267438195592daa499b41727101a" href="#1aedda267438195592daa499b41727101a">operator>= (3/3)</a>

```cpp
friend bool eosio::unsigned_int::operator>= (
    const unsigned_int & i,
    const unsigned_int & v
)
```


Check if the first given **[unsigned\_int](structeosio_1_1unsigned__int.md)** is greater or equal to the second given **[unsigned\_int](structeosio_1_1unsigned__int.md)** object


**Parameters:**


* **i** - First **[unsigned\_int](structeosio_1_1unsigned__int.md)** object to compare 
* **v** - Second **[unsigned\_int](structeosio_1_1unsigned__int.md)** object to compare 



**Returns:**

true - if i is greater or equal to v 




**Returns:**

false - otherwise 




### friend <a id="1a3df4fdc722c22ec765f68db19116266e" href="#1a3df4fdc722c22ec765f68db19116266e">operator<<</a>

```cpp
friend DataStream & eosio::unsigned_int::operator<< (
    DataStream & ds,
    const unsigned_int & v
)
```


Serialize an **[unsigned\_int](structeosio_1_1unsigned__int.md)** object with as few bytes as possible


**Parameters:**


* **ds** - The stream to write 
* **v** - The value to serialize 



**Template parameters:**


* **DataStream** - Type of datastream 



**Returns:**

DataStream& - Reference to the datastream 




### friend <a id="1a63b42b42b55b512f25e5fc9ec6e20787" href="#1a63b42b42b55b512f25e5fc9ec6e20787">operator>></a>

```cpp
friend DataStream & eosio::unsigned_int::operator>> (
    DataStream & ds,
    unsigned_int & vi
)
```


Deserialize an **[unsigned\_int](structeosio_1_1unsigned__int.md)** object


**Parameters:**


* **ds** - The stream to read 
* **vi** - The destination for deserialized value 



**Template parameters:**


* **DataStream** - Type of datastream 



**Returns:**

DataStream& - Reference to the datastream 






----------------------------------------
The documentation for this class was generated from the following file: `in/eosio.cdt/libraries/eosiolib/core/eosio/varint.hpp`
