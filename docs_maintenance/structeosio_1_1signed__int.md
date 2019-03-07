---
search:
    keywords: ['eosio::signed_int', 'value', 'signed_int', 'operator int32_t', 'operator=', 'operator++', 'operator++', 'operator==', 'operator==', 'operator==', 'operator!=', 'operator!=', 'operator!=', 'operator<', 'operator<', 'operator<', 'operator>=', 'operator>=', 'operator>=', 'operator<<', 'operator>>']
---

# struct eosio::signed\_int

[**Class List**](annotated.md) **>** [**eosio**](namespaceeosio.md) **::** [**signed\_int**](structeosio_1_1signed__int.md)


## Public Attributes

|Type|Name|
|-----|-----|
|int32\_t|[**value**](structeosio_1_1signed__int_a67cdbe3b1c5458c048006777b7cabccf.md#1a67cdbe3b1c5458c048006777b7cabccf)|


## Public Functions

|Type|Name|
|-----|-----|
||[**signed\_int**](structeosio_1_1signed__int_adddf4d3e8fad19def090a00ca0dc83fb.md#1adddf4d3e8fad19def090a00ca0dc83fb) (int32\_t v = 0) |
||[**operator int32\_t**](structeosio_1_1signed__int_aa61d83b29d9e8b945ab2df4f3a31f5a3.md#1aa61d83b29d9e8b945ab2df4f3a31f5a3) () const |
|**[signed\_int](structeosio_1_1signed__int.md)** &|[**operator=**](structeosio_1_1signed__int_aa085961225ca51168b030da75d71957e.md#1aa085961225ca51168b030da75d71957e) (const T & v) |
|**[signed\_int](structeosio_1_1signed__int.md)**|[**operator++**](structeosio_1_1signed__int_ac8cb07c410c02f04c343453f0354d5ec.md#1ac8cb07c410c02f04c343453f0354d5ec) (int) |
|**[signed\_int](structeosio_1_1signed__int.md)** &|[**operator++**](structeosio_1_1signed__int_a10ba3746e1008ac48e1d4221fbbb4fb8.md#1a10ba3746e1008ac48e1d4221fbbb4fb8) () |


## Friends

|Type|Name|
|-----|-----|
|friend bool|[**operator==**](structeosio_1_1signed__int_a7e5690c7ad2505e2297e0e536a3ad740.md#1a7e5690c7ad2505e2297e0e536a3ad740)|
|friend bool|[**operator==**](structeosio_1_1signed__int_aec106017391627bd0e273592c18a0eb5.md#1aec106017391627bd0e273592c18a0eb5)|
|friend bool|[**operator==**](structeosio_1_1signed__int_a5612a3dbcbfd3d1fa335aa402c29ac35.md#1a5612a3dbcbfd3d1fa335aa402c29ac35)|
|friend bool|[**operator!=**](structeosio_1_1signed__int_a3ee2f31815a95ec9ffd2ab7a7f02d524.md#1a3ee2f31815a95ec9ffd2ab7a7f02d524)|
|friend bool|[**operator!=**](structeosio_1_1signed__int_a6abfcdc55171168e5679ccd9f37ba471.md#1a6abfcdc55171168e5679ccd9f37ba471)|
|friend bool|[**operator!=**](structeosio_1_1signed__int_a6e25feb014836d0288a262e5d488533c.md#1a6e25feb014836d0288a262e5d488533c)|
|friend bool|[**operator<**](structeosio_1_1signed__int_adbae5ebcac1cb6ed6a7547a427c7cf95.md#1adbae5ebcac1cb6ed6a7547a427c7cf95)|
|friend bool|[**operator<**](structeosio_1_1signed__int_ae0ebf886eb4f8bd58f41626bfc2d88b7.md#1ae0ebf886eb4f8bd58f41626bfc2d88b7)|
|friend bool|[**operator<**](structeosio_1_1signed__int_ac2eea5a817b5774997100c0cdb8c81d2.md#1ac2eea5a817b5774997100c0cdb8c81d2)|
|friend bool|[**operator>=**](structeosio_1_1signed__int_a0b7eb30fe9fdbc1f375309719ad8248c.md#1a0b7eb30fe9fdbc1f375309719ad8248c)|
|friend bool|[**operator>=**](structeosio_1_1signed__int_accb4bcf54dbdec11cdcbd06167d677c9.md#1accb4bcf54dbdec11cdcbd06167d677c9)|
|friend bool|[**operator>=**](structeosio_1_1signed__int_ab249950f493a3623cf845633e07df502.md#1ab249950f493a3623cf845633e07df502)|
|friend DataStream &|[**operator<<**](structeosio_1_1signed__int_afabc024d2020505d135d9efbcf9e16a8.md#1afabc024d2020505d135d9efbcf9e16a8)|
|friend DataStream &|[**operator>>**](structeosio_1_1signed__int_a7eef08b0d7662636e1b0fa0f90bc8ccd.md#1a7eef08b0d7662636e1b0fa0f90bc8ccd)|


## Detailed Description

Variable Length Signed Integer. This provides more efficient serialization of 32-bit signed int. It serializes a 32-bit signed integer in as few bytes as possible.


**Note:**

`varint32' is signed and uses [Zig-Zag encoding](https://developers.google.com/protocol-buffers/docs/encoding#signed-integers) 



## Public Attributes Documentation

### variable <a id="1a67cdbe3b1c5458c048006777b7cabccf" href="#1a67cdbe3b1c5458c048006777b7cabccf">value</a>

```cpp
int32_t eosio::signed_int::value;
```


Contained value 

## Public Functions Documentation

### function <a id="1adddf4d3e8fad19def090a00ca0dc83fb" href="#1adddf4d3e8fad19def090a00ca0dc83fb">signed\_int</a>

```cpp
eosio::signed_int::signed_int (
    int32_t v = 0
)
```


Construct a new signed int object


**Parameters:**


* **v** - Source 



### function <a id="1aa61d83b29d9e8b945ab2df4f3a31f5a3" href="#1aa61d83b29d9e8b945ab2df4f3a31f5a3">operator int32\_t</a>

```cpp
eosio::signed_int::operator int32_t () const
```


Convert **[signed\_int](structeosio_1_1signed__int.md)** to primitive 32-bit signed integer


**Returns:**

int32\_t - The converted result 




### function <a id="1aa085961225ca51168b030da75d71957e" href="#1aa085961225ca51168b030da75d71957e">operator=</a>

```cpp
signed_int & eosio::signed_int::operator= (
    const T & v
)
```


Assign an object that is convertible to int32\_t


**Template parameters:**


* **T** - Type of the assignment object 



**Parameters:**


* **v** - Source 



**Returns:**

**[unsigned\_int](structeosio_1_1unsigned__int.md)**& - Reference to this object 




### function <a id="1ac8cb07c410c02f04c343453f0354d5ec" href="#1ac8cb07c410c02f04c343453f0354d5ec">operator++ (1/2)</a>

```cpp
signed_int eosio::signed_int::operator++ (
    int 
)
```


Increment operator


**Returns:**

**[signed\_int](structeosio_1_1signed__int.md)** - New **[signed\_int](structeosio_1_1signed__int.md)** with value incremented from the current object's value 




### function <a id="1a10ba3746e1008ac48e1d4221fbbb4fb8" href="#1a10ba3746e1008ac48e1d4221fbbb4fb8">operator++ (2/2)</a>

```cpp
signed_int & eosio::signed_int::operator++ ()
```


Increment operator


**Returns:**

**[signed\_int](structeosio_1_1signed__int.md)** - Reference to current object 




## Friends Documentation

### friend <a id="1a7e5690c7ad2505e2297e0e536a3ad740" href="#1a7e5690c7ad2505e2297e0e536a3ad740">operator== (1/3)</a>

```cpp
friend bool eosio::signed_int::operator== (
    const signed_int & i,
    const int32_t & v
)
```


Check equality between a **[signed\_int](structeosio_1_1signed__int.md)** object and 32-bit integer


**Parameters:**


* **i** - **[signed\_int](structeosio_1_1signed__int.md)** object to compare 
* **v** - 32-bit integer to compare 



**Returns:**

true - if equal 




**Returns:**

false - otherwise 




### friend <a id="1aec106017391627bd0e273592c18a0eb5" href="#1aec106017391627bd0e273592c18a0eb5">operator== (2/3)</a>

```cpp
friend bool eosio::signed_int::operator== (
    const int32_t & i,
    const signed_int & v
)
```


Check equality between 32-bit integer and a **[signed\_int](structeosio_1_1signed__int.md)** object


**Parameters:**


* **i** - 32-bit integer to compare 
* **v** - **[signed\_int](structeosio_1_1signed__int.md)** object to compare 



**Returns:**

true - if equal 




**Returns:**

false - otherwise 




### friend <a id="1a5612a3dbcbfd3d1fa335aa402c29ac35" href="#1a5612a3dbcbfd3d1fa335aa402c29ac35">operator== (3/3)</a>

```cpp
friend bool eosio::signed_int::operator== (
    const signed_int & i,
    const signed_int & v
)
```


Check equality between two **[signed\_int](structeosio_1_1signed__int.md)** objects


**Parameters:**


* **i** - First **[signed\_int](structeosio_1_1signed__int.md)** object to compare 
* **v** - Second **[signed\_int](structeosio_1_1signed__int.md)** object to compare 



**Returns:**

true - if equal 




**Returns:**

false - otherwise 




### friend <a id="1a3ee2f31815a95ec9ffd2ab7a7f02d524" href="#1a3ee2f31815a95ec9ffd2ab7a7f02d524">operator!= (1/3)</a>

```cpp
friend bool eosio::signed_int::operator!= (
    const signed_int & i,
    const int32_t & v
)
```


Check inequality between a **[signed\_int](structeosio_1_1signed__int.md)** object and 32-bit integer


**Parameters:**


* **i** - **[signed\_int](structeosio_1_1signed__int.md)** object to compare 
* **v** - 32-bit integer to compare 



**Returns:**

true - if inequal 




**Returns:**

false - otherwise 




### friend <a id="1a6abfcdc55171168e5679ccd9f37ba471" href="#1a6abfcdc55171168e5679ccd9f37ba471">operator!= (2/3)</a>

```cpp
friend bool eosio::signed_int::operator!= (
    const int32_t & i,
    const signed_int & v
)
```


Check inequality between 32-bit integer and a **[signed\_int](structeosio_1_1signed__int.md)** object


**Parameters:**


* **i** - 32-bit integer to compare 
* **v** - **[signed\_int](structeosio_1_1signed__int.md)** object to compare 



**Returns:**

true - if unequal 




**Returns:**

false - otherwise 




### friend <a id="1a6e25feb014836d0288a262e5d488533c" href="#1a6e25feb014836d0288a262e5d488533c">operator!= (3/3)</a>

```cpp
friend bool eosio::signed_int::operator!= (
    const signed_int & i,
    const signed_int & v
)
```


Check inequality between two **[signed\_int](structeosio_1_1signed__int.md)** objects


**Parameters:**


* **i** - First **[signed\_int](structeosio_1_1signed__int.md)** object to compare 
* **v** - Second **[signed\_int](structeosio_1_1signed__int.md)** object to compare 



**Returns:**

true - if inequal 




**Returns:**

false - otherwise 




### friend <a id="1adbae5ebcac1cb6ed6a7547a427c7cf95" href="#1adbae5ebcac1cb6ed6a7547a427c7cf95">operator< (1/3)</a>

```cpp
friend bool eosio::signed_int::operator< (
    const signed_int & i,
    const int32_t & v
)
```


Check if the given **[signed\_int](structeosio_1_1signed__int.md)** object is less than the given 32-bit integer


**Parameters:**


* **i** - **[signed\_int](structeosio_1_1signed__int.md)** object to compare 
* **v** - 32-bit integer to compare 



**Returns:**

true - if i less than v 




**Returns:**

false - otherwise 




### friend <a id="1ae0ebf886eb4f8bd58f41626bfc2d88b7" href="#1ae0ebf886eb4f8bd58f41626bfc2d88b7">operator< (2/3)</a>

```cpp
friend bool eosio::signed_int::operator< (
    const int32_t & i,
    const signed_int & v
)
```


Check if the given 32-bit integer is less than the given **[signed\_int](structeosio_1_1signed__int.md)** object


**Parameters:**


* **i** - 32-bit integer to compare 
* **v** - **[signed\_int](structeosio_1_1signed__int.md)** object to compare 



**Returns:**

true - if i less than v 




**Returns:**

false - otherwise 




### friend <a id="1ac2eea5a817b5774997100c0cdb8c81d2" href="#1ac2eea5a817b5774997100c0cdb8c81d2">operator< (3/3)</a>

```cpp
friend bool eosio::signed_int::operator< (
    const signed_int & i,
    const signed_int & v
)
```


Check if the first given **[signed\_int](structeosio_1_1signed__int.md)** is less than the second given **[signed\_int](structeosio_1_1signed__int.md)** object


**Parameters:**


* **i** - First **[signed\_int](structeosio_1_1signed__int.md)** object to compare 
* **v** - Second **[signed\_int](structeosio_1_1signed__int.md)** object to compare 



**Returns:**

true - if i less than v 




**Returns:**

false - otherwise 




### friend <a id="1a0b7eb30fe9fdbc1f375309719ad8248c" href="#1a0b7eb30fe9fdbc1f375309719ad8248c">operator>= (1/3)</a>

```cpp
friend bool eosio::signed_int::operator>= (
    const signed_int & i,
    const int32_t & v
)
```


Check if the given **[signed\_int](structeosio_1_1signed__int.md)** object is greater or equal to the given 32-bit integer


**Parameters:**


* **i** - **[signed\_int](structeosio_1_1signed__int.md)** object to compare 
* **v** - 32-bit integer to compare 



**Returns:**

true - if i is greater or equal to v 




**Returns:**

false - otherwise 




### friend <a id="1accb4bcf54dbdec11cdcbd06167d677c9" href="#1accb4bcf54dbdec11cdcbd06167d677c9">operator>= (2/3)</a>

```cpp
friend bool eosio::signed_int::operator>= (
    const int32_t & i,
    const signed_int & v
)
```


Check if the given 32-bit integer is greater or equal to the given **[signed\_int](structeosio_1_1signed__int.md)** object


**Parameters:**


* **i** - 32-bit integer to compare 
* **v** - **[signed\_int](structeosio_1_1signed__int.md)** object to compare 



**Returns:**

true - if i is greater or equal to v 




**Returns:**

false - otherwise 




### friend <a id="1ab249950f493a3623cf845633e07df502" href="#1ab249950f493a3623cf845633e07df502">operator>= (3/3)</a>

```cpp
friend bool eosio::signed_int::operator>= (
    const signed_int & i,
    const signed_int & v
)
```


Check if the first given **[signed\_int](structeosio_1_1signed__int.md)** is greater or equal to the second given **[signed\_int](structeosio_1_1signed__int.md)** object


**Parameters:**


* **i** - First **[signed\_int](structeosio_1_1signed__int.md)** object to compare 
* **v** - Second **[signed\_int](structeosio_1_1signed__int.md)** object to compare 



**Returns:**

true - if i is greater or equal to v 




**Returns:**

false - otherwise 




### friend <a id="1afabc024d2020505d135d9efbcf9e16a8" href="#1afabc024d2020505d135d9efbcf9e16a8">operator<<</a>

```cpp
friend DataStream & eosio::signed_int::operator<< (
    DataStream & ds,
    const signed_int & v
)
```


Serialize an **[signed\_int](structeosio_1_1signed__int.md)** object with as few bytes as possible


**Parameters:**


* **ds** - The stream to write 
* **v** - The value to serialize 



**Template parameters:**


* **DataStream** - Type of datastream 



**Returns:**

DataStream& - Reference to the datastream 




### friend <a id="1a7eef08b0d7662636e1b0fa0f90bc8ccd" href="#1a7eef08b0d7662636e1b0fa0f90bc8ccd">operator>></a>

```cpp
friend DataStream & eosio::signed_int::operator>> (
    DataStream & ds,
    signed_int & vi
)
```


Deserialize an **[signed\_int](structeosio_1_1signed__int.md)** object


**Parameters:**


* **ds** - The stream to read 
* **vi** - The destination for deserialized value 



**Template parameters:**


* **DataStream** - Type of datastream 



**Returns:**

DataStream& - Reference to the datastream 






----------------------------------------
The documentation for this class was generated from the following file: `in/eosio.cdt/libraries/eosiolib/core/eosio/varint.hpp`
