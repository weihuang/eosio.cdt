---
search:
    keywords: ['eosio::signature', 'type', 'data', 'operator==', 'operator!=', 'operator==', 'operator!=']
---

# struct eosio::signature

[**Class List**](annotated.md) **>** [**eosio**](namespaceeosio.md) **::** [**signature**](structeosio_1_1signature.md)


EOSIO Signature. [More...](#detailed-description)
## Public Attributes

|Type|Name|
|-----|-----|
|**[unsigned\_int](structeosio_1_1unsigned__int.md)**|[**type**](group__crypto_ga05b7f35a26bb95f309b63e397ae30062.md#ga05b7f35a26bb95f309b63e397ae30062)<br>Type of the signature. |
|std::array< char, 65 >|[**data**](group__crypto_ga1ac546c159e25cea15efbf581debb9d3.md#ga1ac546c159e25cea15efbf581debb9d3)<br>Bytes of the signature. |


## Friends

|Type|Name|
|-----|-----|
|friend bool|[**operator==**](structeosio_1_1signature_a604e0b457e68d9a858f3cbe1eaadee22.md#1a604e0b457e68d9a858f3cbe1eaadee22)|
|friend bool|[**operator!=**](structeosio_1_1signature_a34a86654c33fbb08092b9ce1269d8e51.md#1a34a86654c33fbb08092b9ce1269d8e51)|
|friend bool|[**operator==**](group__crypto_ga604e0b457e68d9a858f3cbe1eaadee22.md#ga604e0b457e68d9a858f3cbe1eaadee22)|
|friend bool|[**operator!=**](group__crypto_ga34a86654c33fbb08092b9ce1269d8e51.md#ga34a86654c33fbb08092b9ce1269d8e51)|


## Detailed Description

EOSIO Signature 
## Public Attributes Documentation

### variable <a id="ga05b7f35a26bb95f309b63e397ae30062" href="#ga05b7f35a26bb95f309b63e397ae30062">type</a>

```cpp
unsigned_int eosio::signature::type;
```

Type of the signature. 

Type of the signature, could be either K1 or R1 

### variable <a id="ga1ac546c159e25cea15efbf581debb9d3" href="#ga1ac546c159e25cea15efbf581debb9d3">data</a>

```cpp
std::array< char, 65 > eosio::signature::data;
```

Bytes of the signature. 

Bytes of the signature 

## Friends Documentation

### friend <a id="1a604e0b457e68d9a858f3cbe1eaadee22" href="#1a604e0b457e68d9a858f3cbe1eaadee22">operator== (1/2)</a>

```cpp
friend bool eosio::signature::operator== (
    const signature & a,
    const signature & b
)
```



### friend <a id="1a34a86654c33fbb08092b9ce1269d8e51" href="#1a34a86654c33fbb08092b9ce1269d8e51">operator!= (1/2)</a>

```cpp
friend bool eosio::signature::operator!= (
    const signature & a,
    const signature & b
)
```



### friend <a id="ga604e0b457e68d9a858f3cbe1eaadee22" href="#ga604e0b457e68d9a858f3cbe1eaadee22">operator== (2/2)</a>

```cpp
friend bool eosio::signature::operator== (
    const signature & a,
    const signature & b
)
```



### friend <a id="ga34a86654c33fbb08092b9ce1269d8e51" href="#ga34a86654c33fbb08092b9ce1269d8e51">operator!= (2/2)</a>

```cpp
friend bool eosio::signature::operator!= (
    const signature & a,
    const signature & b
)
```





----------------------------------------
The documentation for this class was generated from the following file: `in/eosio.cdt/libraries/eosiolib/core/eosio/crypto.hpp`
