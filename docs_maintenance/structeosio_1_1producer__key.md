---
search:
    keywords: ['eosio::producer_key', 'producer_name', 'block_signing_key', 'operator<', 'operator<']
---

# struct eosio::producer\_key

[**Class List**](annotated.md) **>** [**eosio**](namespaceeosio.md) **::** [**producer\_key**](structeosio_1_1producer__key.md)


Maps producer with its signing key. [More...](#detailed-description)
## Public Attributes

|Type|Name|
|-----|-----|
|**[name](structeosio_1_1name.md)**|[**producer\_name**](group__producer__key_gabec477141e08f7648fbdb5d7c2e69824.md#gabec477141e08f7648fbdb5d7c2e69824)<br>Name of the producer. |
|**[public\_key](structeosio_1_1public__key.md)**|[**block\_signing\_key**](group__producer__key_gaf5899a46ea38009f20643792af38d26b.md#gaf5899a46ea38009f20643792af38d26b)<br>Block signing key used by this producer. |


## Friends

|Type|Name|
|-----|-----|
|friend constexpr bool|[**operator<**](structeosio_1_1producer__key_a90ba7a85612a19a42fb7c598cd0d3406.md#1a90ba7a85612a19a42fb7c598cd0d3406)|
|friend constexpr bool|[**operator<**](structeosio_1_1producer__key_a90ba7a85612a19a42fb7c598cd0d3406.md#1a90ba7a85612a19a42fb7c598cd0d3406)|


## Detailed Description

Maps producer with its signing key, used for producer schedule 
## Public Attributes Documentation

### variable <a id="gabec477141e08f7648fbdb5d7c2e69824" href="#gabec477141e08f7648fbdb5d7c2e69824">producer\_name</a>

```cpp
name eosio::producer_key::producer_name;
```

Name of the producer. 

Name of the producer 

### variable <a id="gaf5899a46ea38009f20643792af38d26b" href="#gaf5899a46ea38009f20643792af38d26b">block\_signing\_key</a>

```cpp
public_key eosio::producer_key::block_signing_key;
```

Block signing key used by this producer. 

Block signing key used by this producer 

## Friends Documentation

### friend <a id="1a90ba7a85612a19a42fb7c598cd0d3406" href="#1a90ba7a85612a19a42fb7c598cd0d3406">operator< (2/2)</a>

```cpp
friend constexpr bool eosio::producer_key::operator< (
    const producer_key & a,
    const producer_key & b
)
```



### friend <a id="1a90ba7a85612a19a42fb7c598cd0d3406" href="#1a90ba7a85612a19a42fb7c598cd0d3406">operator< (2/2)</a>

```cpp
friend constexpr bool eosio::producer_key::operator< (
    const producer_key & a,
    const producer_key & b
)
```





----------------------------------------
The documentation for this class was generated from the following file: `in/eosio.cdt/libraries/eosiolib/contracts/eosio/producer\_schedule.hpp`
