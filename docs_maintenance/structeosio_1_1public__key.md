---
search:
    keywords: ['eosio::public_key', 'type', 'data', 'operator==', 'operator!=', 'operator==', 'operator!=']
---

# struct eosio::public\_key

[**Class List**](annotated.md) **>** [**eosio**](namespaceeosio.md) **::** [**public\_key**](structeosio_1_1public__key.md)


EOSIO Public Key. [More...](#detailed-description)
## Public Attributes

|Type|Name|
|-----|-----|
|**[unsigned\_int](structeosio_1_1unsigned__int.md)**|[**type**](group__publickeytype_gaaba0301ecc27240508120958503b2361.md#gaaba0301ecc27240508120958503b2361)<br>Type of the public key. |
|std::array< char, 33 >|[**data**](group__publickeytype_ga39b3ec8f584d66aca02dbacdfb9ae737.md#ga39b3ec8f584d66aca02dbacdfb9ae737)<br>Bytes of the public key. |


## Friends

|Type|Name|
|-----|-----|
|friend bool|[**operator==**](structeosio_1_1public__key_a4f2610bdec460bf2b0203684a9599da5.md#1a4f2610bdec460bf2b0203684a9599da5)|
|friend bool|[**operator!=**](structeosio_1_1public__key_a5faa639eb95ed12c1be5d8ae65c7cb54.md#1a5faa639eb95ed12c1be5d8ae65c7cb54)|
|friend bool|[**operator==**](group__crypto_ga4f2610bdec460bf2b0203684a9599da5.md#ga4f2610bdec460bf2b0203684a9599da5)|
|friend bool|[**operator!=**](group__crypto_ga5faa639eb95ed12c1be5d8ae65c7cb54.md#ga5faa639eb95ed12c1be5d8ae65c7cb54)|


## Detailed Description

EOSIO Public Key 
## Public Attributes Documentation

### variable <a id="gaaba0301ecc27240508120958503b2361" href="#gaaba0301ecc27240508120958503b2361">type</a>

```cpp
unsigned_int eosio::public_key::type;
```

Type of the public key. 

Type of the public key, could be either K1 or R1 

### variable <a id="ga39b3ec8f584d66aca02dbacdfb9ae737" href="#ga39b3ec8f584d66aca02dbacdfb9ae737">data</a>

```cpp
std::array< char, 33 > eosio::public_key::data;
```

Bytes of the public key. 

Bytes of the public key 

## Friends Documentation

### friend <a id="1a4f2610bdec460bf2b0203684a9599da5" href="#1a4f2610bdec460bf2b0203684a9599da5">operator== (1/2)</a>

```cpp
friend bool eosio::public_key::operator== (
    const public_key & a,
    const public_key & b
)
```



### friend <a id="1a5faa639eb95ed12c1be5d8ae65c7cb54" href="#1a5faa639eb95ed12c1be5d8ae65c7cb54">operator!= (1/2)</a>

```cpp
friend bool eosio::public_key::operator!= (
    const public_key & a,
    const public_key & b
)
```



### friend <a id="ga4f2610bdec460bf2b0203684a9599da5" href="#ga4f2610bdec460bf2b0203684a9599da5">operator== (2/2)</a>

```cpp
friend bool eosio::public_key::operator== (
    const public_key & a,
    const public_key & b
)
```



### friend <a id="ga5faa639eb95ed12c1be5d8ae65c7cb54" href="#ga5faa639eb95ed12c1be5d8ae65c7cb54">operator!= (2/2)</a>

```cpp
friend bool eosio::public_key::operator!= (
    const public_key & a,
    const public_key & b
)
```





----------------------------------------
The documentation for this class was generated from the following file: `in/eosio.cdt/libraries/eosiolib/core/eosio/crypto.hpp`
