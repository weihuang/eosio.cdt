---
search:
    keywords: ['eosio::rope', 'rope', 'append', 'append', 'at', 'append', 'append', 'operator[]', 'operator+=', 'operator+=', 'operator+=', 'length', 'print', 'c_str', 'operator+', 'operator+', 'operator+']
---

# class eosio::rope

[**Class List**](annotated.md) **>** [**eosio**](namespaceeosio.md) **::** [**rope**](classeosio_1_1rope.md)


## Public Functions

|Type|Name|
|-----|-----|
||[**rope**](classeosio_1_1rope_aea2f5203db95839a376250f3c29e80f7.md#1aea2f5203db95839a376250f3c29e80f7) (const char \* s) |
|constexpr void|[**append**](classeosio_1_1rope_a41bb00d1ad6f0022a0de52984c524246.md#1a41bb00d1ad6f0022a0de52984c524246) (const char(&) s) |
|void|[**append**](classeosio_1_1rope_ab0a0ba2be3a91de71ec2fc919ad73974.md#1ab0a0ba2be3a91de71ec2fc919ad73974) (const char \* s, size\_t len) |
|constexpr char|[**at**](classeosio_1_1rope_a1a05bd4dc4277bc66f4dc3f37858c02d.md#1a1a05bd4dc4277bc66f4dc3f37858c02d) (size\_t index) |
|constexpr void|[**append**](classeosio_1_1rope_a87cd18373790ef056244f4a0e09b8f75.md#1a87cd18373790ef056244f4a0e09b8f75) (const **[rope](classeosio_1_1rope.md)** & r) |
|constexpr void|[**append**](classeosio_1_1rope_a480943c8c8407a36d77e14ff9d810dfe.md#1a480943c8c8407a36d77e14ff9d810dfe) (**[rope](classeosio_1_1rope.md)** && r) |
|constexpr char|[**operator[]**](classeosio_1_1rope_a4c40c4f43561b05f6fe16edf7adbaef8.md#1a4c40c4f43561b05f6fe16edf7adbaef8) (size\_t index) |
|constexpr **[rope](classeosio_1_1rope.md)** &|[**operator+=**](classeosio_1_1rope_a8030da6fd436b7c17c9fb4084afeda12.md#1a8030da6fd436b7c17c9fb4084afeda12) (const char \* s) |
|constexpr **[rope](classeosio_1_1rope.md)** &|[**operator+=**](classeosio_1_1rope_af8b46dddb64f7fa16f853e59a0a837f0.md#1af8b46dddb64f7fa16f853e59a0a837f0) (const **[rope](classeosio_1_1rope.md)** & r) |
|constexpr **[rope](classeosio_1_1rope.md)** &|[**operator+=**](classeosio_1_1rope_a4f8af4a2576e5c040a5a674c2d20cb10.md#1a4f8af4a2576e5c040a5a674c2d20cb10) (**[rope](classeosio_1_1rope.md)** && r) |
|constexpr size\_t|[**length**](classeosio_1_1rope_a55c20ad2f4bddfe33423fc078a33f478.md#1a55c20ad2f4bddfe33423fc078a33f478) () |
|void|[**print**](classeosio_1_1rope_acee48b4685b912e110c24f4cbd9caa4d.md#1acee48b4685b912e110c24f4cbd9caa4d) () const |
|char \*|[**c\_str**](classeosio_1_1rope_a63a30647274fe3294c40bf46c90569f0.md#1a63a30647274fe3294c40bf46c90569f0) () const |


## Friends

|Type|Name|
|-----|-----|
|friend **[rope](classeosio_1_1rope.md)**|[**operator+**](classeosio_1_1rope_aa882baad43917693e1f93b5e546eb4d8.md#1aa882baad43917693e1f93b5e546eb4d8)|
|friend **[rope](classeosio_1_1rope.md)**|[**operator+**](classeosio_1_1rope_a36e6c3ae93eb1350bd138347edebe939.md#1a36e6c3ae93eb1350bd138347edebe939)|
|friend **[rope](classeosio_1_1rope.md)**|[**operator+**](classeosio_1_1rope_a7bb3cd3347e4718e40e175d6c76a5f2a.md#1a7bb3cd3347e4718e40e175d6c76a5f2a)|


## Public Functions Documentation

### function <a id="1aea2f5203db95839a376250f3c29e80f7" href="#1aea2f5203db95839a376250f3c29e80f7">rope</a>

```cpp
eosio::rope::rope (
    const char * s
)
```



### function <a id="1a41bb00d1ad6f0022a0de52984c524246" href="#1a41bb00d1ad6f0022a0de52984c524246">append (2/5)</a>

```cpp
constexpr void eosio::rope::append (
    const char(&) s
)
```



### function <a id="1ab0a0ba2be3a91de71ec2fc919ad73974" href="#1ab0a0ba2be3a91de71ec2fc919ad73974">append (3/5)</a>

```cpp
void eosio::rope::append (
    const char * s,
    size_t len
)
```



### function <a id="1a1a05bd4dc4277bc66f4dc3f37858c02d" href="#1a1a05bd4dc4277bc66f4dc3f37858c02d">at (2/2)</a>

```cpp
constexpr char eosio::rope::at (
    size_t index
)
```



### function <a id="1a87cd18373790ef056244f4a0e09b8f75" href="#1a87cd18373790ef056244f4a0e09b8f75">append (4/5)</a>

```cpp
constexpr void eosio::rope::append (
    const rope & r
)
```



### function <a id="1a480943c8c8407a36d77e14ff9d810dfe" href="#1a480943c8c8407a36d77e14ff9d810dfe">append (5/5)</a>

```cpp
constexpr void eosio::rope::append (
    rope && r
)
```



### function <a id="1a4c40c4f43561b05f6fe16edf7adbaef8" href="#1a4c40c4f43561b05f6fe16edf7adbaef8">operator[]</a>

```cpp
constexpr char eosio::rope::operator[] (
    size_t index
)
```



### function <a id="1a8030da6fd436b7c17c9fb4084afeda12" href="#1a8030da6fd436b7c17c9fb4084afeda12">operator+= (1/3)</a>

```cpp
constexpr rope & eosio::rope::operator+= (
    const char * s
)
```



### function <a id="1af8b46dddb64f7fa16f853e59a0a837f0" href="#1af8b46dddb64f7fa16f853e59a0a837f0">operator+= (2/3)</a>

```cpp
constexpr rope & eosio::rope::operator+= (
    const rope & r
)
```



### function <a id="1a4f8af4a2576e5c040a5a674c2d20cb10" href="#1a4f8af4a2576e5c040a5a674c2d20cb10">operator+= (3/3)</a>

```cpp
constexpr rope & eosio::rope::operator+= (
    rope && r
)
```



### function <a id="1a55c20ad2f4bddfe33423fc078a33f478" href="#1a55c20ad2f4bddfe33423fc078a33f478">length</a>

```cpp
constexpr size_t eosio::rope::length ()
```



### function <a id="1acee48b4685b912e110c24f4cbd9caa4d" href="#1acee48b4685b912e110c24f4cbd9caa4d">print</a>

```cpp
void eosio::rope::print () const
```



### function <a id="1a63a30647274fe3294c40bf46c90569f0" href="#1a63a30647274fe3294c40bf46c90569f0">c\_str (2/2)</a>

```cpp
char * eosio::rope::c_str () const
```



## Friends Documentation

### friend <a id="1aa882baad43917693e1f93b5e546eb4d8" href="#1aa882baad43917693e1f93b5e546eb4d8">operator+ (1/3)</a>

```cpp
friend rope eosio::rope::operator+ (
    rope lhs,
    const char * s
)
```



### friend <a id="1a36e6c3ae93eb1350bd138347edebe939" href="#1a36e6c3ae93eb1350bd138347edebe939">operator+ (2/3)</a>

```cpp
friend rope eosio::rope::operator+ (
    rope lhs,
    const rope & rhs
)
```



### friend <a id="1a7bb3cd3347e4718e40e175d6c76a5f2a" href="#1a7bb3cd3347e4718e40e175d6c76a5f2a">operator+ (3/3)</a>

```cpp
friend rope eosio::rope::operator+ (
    rope lhs,
    rope && rhs
)
```





----------------------------------------
The documentation for this class was generated from the following file: `in/eosio.cdt/libraries/eosiolib/core/eosio/rope.hpp`
