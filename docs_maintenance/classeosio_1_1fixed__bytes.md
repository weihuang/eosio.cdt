---
search:
    keywords: ['eosio::fixed_bytes', 'bool_pack', 'word_t', 'word_t', 'num_words', 'padded_bytes', 'make_from_word_sequence', 'num_words', 'padded_bytes', 'make_from_word_sequence', 'fixed_bytes', 'fixed_bytes', 'fixed_bytes', 'fixed_bytes', 'get_array', 'data', 'data', 'size', 'extract_as_byte_array', 'print', 'fixed_bytes', 'fixed_bytes', 'fixed_bytes', 'fixed_bytes', 'get_array', 'data', 'data', 'size', 'extract_as_byte_array', 'operator==', 'operator!=', 'operator>', 'operator<', 'operator>=', 'operator<=', 'operator==', 'operator!=', 'operator>', 'operator<', 'operator>=', 'operator<=']
---

# class eosio::fixed\_bytes

[**Class List**](annotated.md) **>** [**eosio**](namespaceeosio.md) **::** [**fixed\_bytes**](classeosio_1_1fixed__bytes.md)


Fixed size array of bytes sorted lexicographically. [More...](#detailed-description)
## Classes

|Type|Name|
|-----|-----|
|struct|[**bool\_pack**](structeosio_1_1fixed__bytes_1_1bool__pack.md)|


## Public Types

|Type|Name|
|-----|-----|
|typedef uint128\_t|[**word\_t**](classeosio_1_1fixed__bytes_a33cae440afac79b5a925ac1eab43d41b.md#1a33cae440afac79b5a925ac1eab43d41b)|
|typedef uint128\_t|[**word\_t**](classeosio_1_1fixed__bytes_a33cae440afac79b5a925ac1eab43d41b.md#1a33cae440afac79b5a925ac1eab43d41b)|


## Public Static Functions

|Type|Name|
|-----|-----|
|static constexpr size\_t|[**num\_words**](classeosio_1_1fixed__bytes_a624f3e2c6a33a0197b0d59c6995c47d8.md#1a624f3e2c6a33a0197b0d59c6995c47d8) () |
|static constexpr size\_t|[**padded\_bytes**](classeosio_1_1fixed__bytes_aeaa53faaa1a06cbc7693faeb57d3ed9a.md#1aeaa53faaa1a06cbc7693faeb57d3ed9a) () |
|static **[fixed\_bytes](classeosio_1_1fixed__bytes.md)**< Size >|[**make\_from\_word\_sequence**](classeosio_1_1fixed__bytes_a5444aeb9a9425cc4df9c588a2d43bfe6.md#1a5444aeb9a9425cc4df9c588a2d43bfe6) () |
|static constexpr size\_t|[**num\_words**](classeosio_1_1fixed__bytes_a624f3e2c6a33a0197b0d59c6995c47d8.md#1a624f3e2c6a33a0197b0d59c6995c47d8) () <br>Get number of words contained in this **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object. |
|static constexpr size\_t|[**padded\_bytes**](classeosio_1_1fixed__bytes_aeaa53faaa1a06cbc7693faeb57d3ed9a.md#1aeaa53faaa1a06cbc7693faeb57d3ed9a) () <br>Get number of padded bytes contained in this **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object. |
|static **[fixed\_bytes](classeosio_1_1fixed__bytes.md)**< Size >|[**make\_from\_word\_sequence**](classeosio_1_1fixed__bytes_a4443867421d46a4416e105c6290efeee.md#1a4443867421d46a4416e105c6290efeee) () <br>Create a new **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object from a sequence of words. |


## Public Functions

|Type|Name|
|-----|-----|
|constexpr|[**fixed\_bytes**](classeosio_1_1fixed__bytes_abb272f4e962fa15dd78633053bb63d31.md#1abb272f4e962fa15dd78633053bb63d31) () |
||[**fixed\_bytes**](classeosio_1_1fixed__bytes_ad2ca84b3f4fcc67b99e6f7731825789d.md#1ad2ca84b3f4fcc67b99e6f7731825789d) (const std::array< **[word\_t](classeosio_1_1fixed__bytes_a33cae440afac79b5a925ac1eab43d41b.md#1a33cae440afac79b5a925ac1eab43d41b)**, **[num\_words](classeosio_1_1fixed__bytes_a624f3e2c6a33a0197b0d59c6995c47d8.md#1a624f3e2c6a33a0197b0d59c6995c47d8)**()> & arr) |
||[**fixed\_bytes**](classeosio_1_1fixed__bytes_a6d082b4eb4541d6b311849939b5a6ea5.md#1a6d082b4eb4541d6b311849939b5a6ea5) (const std::array< Word, NumWords > & arr) |
||[**fixed\_bytes**](classeosio_1_1fixed__bytes_abdc3879046e86eaaf6e867bce216a5fd.md#1abdc3879046e86eaaf6e867bce216a5fd) (const Word(&) arr) |
|const auto &|[**get\_array**](classeosio_1_1fixed__bytes_ad54e7bd5c26dc28c579b3987d3a43def.md#1ad54e7bd5c26dc28c579b3987d3a43def) () const |
|auto|[**data**](classeosio_1_1fixed__bytes_a08cee20b3d10e105992a915b35721eb7.md#1a08cee20b3d10e105992a915b35721eb7) () |
|auto|[**data**](classeosio_1_1fixed__bytes_ac5078b186868eb29ddffe4f4c4e1a5f0.md#1ac5078b186868eb29ddffe4f4c4e1a5f0) () const |
|auto|[**size**](classeosio_1_1fixed__bytes_ac2d8051c8675cda490ae406ca35cdea4.md#1ac2d8051c8675cda490ae406ca35cdea4) () const |
|std::array< uint8\_t, Size >|[**extract\_as\_byte\_array**](classeosio_1_1fixed__bytes_a0ae918fa4de2ed7b20065b133b1e95c9.md#1a0ae918fa4de2ed7b20065b133b1e95c9) () const |
|void|[**print**](classeosio_1_1fixed__bytes_afeaa78eb715d55b40c00e4c542de64db.md#1afeaa78eb715d55b40c00e4c542de64db) () const |
|constexpr|[**fixed\_bytes**](classeosio_1_1fixed__bytes_abb272f4e962fa15dd78633053bb63d31.md#1abb272f4e962fa15dd78633053bb63d31) () <br>Default constructor to **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object. |
||[**fixed\_bytes**](classeosio_1_1fixed__bytes_ad2ca84b3f4fcc67b99e6f7731825789d.md#1ad2ca84b3f4fcc67b99e6f7731825789d) (const std::array< **[word\_t](classeosio_1_1fixed__bytes_a33cae440afac79b5a925ac1eab43d41b.md#1a33cae440afac79b5a925ac1eab43d41b)**, **[num\_words](classeosio_1_1fixed__bytes_a624f3e2c6a33a0197b0d59c6995c47d8.md#1a624f3e2c6a33a0197b0d59c6995c47d8)**()> & arr) <br>Constructor to **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object from std::array of **[num\_words()](classeosio_1_1fixed__bytes_a624f3e2c6a33a0197b0d59c6995c47d8.md#1a624f3e2c6a33a0197b0d59c6995c47d8)** word\_t types. |
||[**fixed\_bytes**](classeosio_1_1fixed__bytes_a6d082b4eb4541d6b311849939b5a6ea5.md#1a6d082b4eb4541d6b311849939b5a6ea5) (const std::array< Word, NumWords > & arr) <br>Constructor to **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object from std::array of Word types smaller in size than word\_t. |
||[**fixed\_bytes**](classeosio_1_1fixed__bytes_abdc3879046e86eaaf6e867bce216a5fd.md#1abdc3879046e86eaaf6e867bce216a5fd) (const Word(&) arr) <br>Constructor to **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object from fixed-sized C array of Word types smaller in size than word\_t. |
|const auto &|[**get\_array**](classeosio_1_1fixed__bytes_ad54e7bd5c26dc28c579b3987d3a43def.md#1ad54e7bd5c26dc28c579b3987d3a43def) () const <br>Get the contained std::array. |
|auto|[**data**](classeosio_1_1fixed__bytes_a08cee20b3d10e105992a915b35721eb7.md#1a08cee20b3d10e105992a915b35721eb7) () <br>Get the underlying data of the contained std::array. |
|auto|[**data**](classeosio_1_1fixed__bytes_ac5078b186868eb29ddffe4f4c4e1a5f0.md#1ac5078b186868eb29ddffe4f4c4e1a5f0) () const <br>Get the underlying data of the contained std::array. |
|auto|[**size**](classeosio_1_1fixed__bytes_ac2d8051c8675cda490ae406ca35cdea4.md#1ac2d8051c8675cda490ae406ca35cdea4) () const <br>Get the size of the contained std::array. |
|std::array< uint8\_t, Size >|[**extract\_as\_byte\_array**](classeosio_1_1fixed__bytes_a0ae918fa4de2ed7b20065b133b1e95c9.md#1a0ae918fa4de2ed7b20065b133b1e95c9) () const <br>Extract the contained data as an array of bytes. |


## Friends

|Type|Name|
|-----|-----|
|friend bool|[**operator==**](classeosio_1_1fixed__bytes_a6c144223829998ed986f74db6ac316de.md#1a6c144223829998ed986f74db6ac316de)<br>Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. |
|friend bool|[**operator!=**](classeosio_1_1fixed__bytes_ad6c27d9885b209d46c75ce77d9a8662a.md#1ad6c27d9885b209d46c75ce77d9a8662a)<br>Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. |
|friend bool|[**operator>**](classeosio_1_1fixed__bytes_adba21b4e48205fb1271a9c9761a30fbc.md#1adba21b4e48205fb1271a9c9761a30fbc)<br>Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. |
|friend bool|[**operator<**](classeosio_1_1fixed__bytes_abae9c23b34c63ab070f03b290e117620.md#1abae9c23b34c63ab070f03b290e117620)<br>Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. |
|friend bool|[**operator>=**](classeosio_1_1fixed__bytes_a7e9bf8ad313795fe29b8b11823773b62.md#1a7e9bf8ad313795fe29b8b11823773b62)<br>Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. |
|friend bool|[**operator<=**](classeosio_1_1fixed__bytes_a0ab215b30f2c2ccef1384303404e07d8.md#1a0ab215b30f2c2ccef1384303404e07d8)<br>Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. |
|friend bool|[**operator==**](classeosio_1_1fixed__bytes_a6c144223829998ed986f74db6ac316de.md#1a6c144223829998ed986f74db6ac316de)<br>Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. |
|friend bool|[**operator!=**](classeosio_1_1fixed__bytes_ad6c27d9885b209d46c75ce77d9a8662a.md#1ad6c27d9885b209d46c75ce77d9a8662a)<br>Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. |
|friend bool|[**operator>**](classeosio_1_1fixed__bytes_adba21b4e48205fb1271a9c9761a30fbc.md#1adba21b4e48205fb1271a9c9761a30fbc)<br>Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. |
|friend bool|[**operator<**](classeosio_1_1fixed__bytes_abae9c23b34c63ab070f03b290e117620.md#1abae9c23b34c63ab070f03b290e117620)<br>Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. |
|friend bool|[**operator>=**](classeosio_1_1fixed__bytes_a7e9bf8ad313795fe29b8b11823773b62.md#1a7e9bf8ad313795fe29b8b11823773b62)<br>Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. |
|friend bool|[**operator<=**](classeosio_1_1fixed__bytes_a0ab215b30f2c2ccef1384303404e07d8.md#1a0ab215b30f2c2ccef1384303404e07d8)<br>Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. |


## Detailed Description

Fixed size byte array sorted lexicographically


**Template parameters:**


* **Size** - Size of the **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object 


## Public Types Documentation

### typedef <a id="1a33cae440afac79b5a925ac1eab43d41b" href="#1a33cae440afac79b5a925ac1eab43d41b">word\_t (2/2)</a>

```cpp
typedef uint128_t eosio::fixed_bytes< Size >::word_t;
```



### typedef <a id="1a33cae440afac79b5a925ac1eab43d41b" href="#1a33cae440afac79b5a925ac1eab43d41b">word\_t (2/2)</a>

```cpp
typedef uint128_t eosio::fixed_bytes< Size >::word_t;
```



## Public Static Functions Documentation

### function <a id="1a624f3e2c6a33a0197b0d59c6995c47d8" href="#1a624f3e2c6a33a0197b0d59c6995c47d8">num\_words (2/2)</a>

```cpp
static constexpr size_t eosio::fixed_bytes::num_words ()
```


Get number of words contained in this **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object. A word is defined to be 16 bytes in size 

### function <a id="1aeaa53faaa1a06cbc7693faeb57d3ed9a" href="#1aeaa53faaa1a06cbc7693faeb57d3ed9a">padded\_bytes (2/2)</a>

```cpp
static constexpr size_t eosio::fixed_bytes::padded_bytes ()
```


Get number of padded bytes contained in this **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object. Padded bytes are the remaining bytes inside the **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object after all the words are allocated 

### function <a id="1a5444aeb9a9425cc4df9c588a2d43bfe6" href="#1a5444aeb9a9425cc4df9c588a2d43bfe6">make\_from\_word\_sequence (1/2)</a>

```cpp
static fixed_bytes< Size > eosio::fixed_bytes::make_from_word_sequence ()
```


Create a new **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object from a sequence of words


**Template parameters:**


* **FirstWord** - The type of the first word in the sequence 
* **Rest** - The type of the remaining words in the sequence 



**Parameters:**


* **first\_word** - The first word in the sequence 
* **rest** - The remaining words in the sequence 



### function <a id="1a624f3e2c6a33a0197b0d59c6995c47d8" href="#1a624f3e2c6a33a0197b0d59c6995c47d8">num\_words (2/2)</a>

```cpp
static constexpr size_t eosio::fixed_bytes::num_words ()
```

Get number of words contained in this **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object. 

Get number of words contained in this **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object. A word is defined to be 16 bytes in size 

### function <a id="1aeaa53faaa1a06cbc7693faeb57d3ed9a" href="#1aeaa53faaa1a06cbc7693faeb57d3ed9a">padded\_bytes (2/2)</a>

```cpp
static constexpr size_t eosio::fixed_bytes::padded_bytes ()
```

Get number of padded bytes contained in this **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object. 

Get number of padded bytes contained in this **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object. Padded bytes are the remaining bytes inside the **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object after all the words are allocated 

### function <a id="1a4443867421d46a4416e105c6290efeee" href="#1a4443867421d46a4416e105c6290efeee">make\_from\_word\_sequence (2/2)</a>

```cpp
static fixed_bytes< Size > eosio::fixed_bytes::make_from_word_sequence ()
```

Create a new **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object from a sequence of words. 

Create a new **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object from a sequence of words 

**Template parameters:**


* **FirstWord** - The type of the first word in the sequence 
* **Rest** - The type of the remaining words in the sequence 



**Parameters:**


* **first\_word** - The first word in the sequence 
* **rest** - The remaining words in the sequence 



## Public Functions Documentation

### function <a id="1abb272f4e962fa15dd78633053bb63d31" href="#1abb272f4e962fa15dd78633053bb63d31">fixed\_bytes (5/8)</a>

```cpp
constexpr eosio::fixed_bytes::fixed_bytes ()
```


Default constructor to **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object which initializes all bytes to zero 

### function <a id="1ad2ca84b3f4fcc67b99e6f7731825789d" href="#1ad2ca84b3f4fcc67b99e6f7731825789d">fixed\_bytes (6/8)</a>

```cpp
eosio::fixed_bytes::fixed_bytes (
    const std::array< word_t, num_words()> & arr
)
```


Constructor to **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object from std::array of **[num\_words()](classeosio_1_1fixed__bytes_a624f3e2c6a33a0197b0d59c6995c47d8.md#1a624f3e2c6a33a0197b0d59c6995c47d8)** word\_t types


**Parameters:**


* **arr** data 



### function <a id="1a6d082b4eb4541d6b311849939b5a6ea5" href="#1a6d082b4eb4541d6b311849939b5a6ea5">fixed\_bytes (7/8)</a>

```cpp
eosio::fixed_bytes::fixed_bytes (
    const std::array< Word, NumWords > & arr
)
```


Constructor to **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object from std::array of Word types smaller in size than word\_t


**Parameters:**


* **arr** - Source data 



### function <a id="1abdc3879046e86eaaf6e867bce216a5fd" href="#1abdc3879046e86eaaf6e867bce216a5fd">fixed\_bytes (8/8)</a>

```cpp
eosio::fixed_bytes::fixed_bytes (
    const Word(&) arr
)
```


Constructor to **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object from fixed-sized C array of Word types smaller in size than word\_t


**Parameters:**


* **arr** - Source data 



### function <a id="1ad54e7bd5c26dc28c579b3987d3a43def" href="#1ad54e7bd5c26dc28c579b3987d3a43def">get\_array (2/2)</a>

```cpp
const auto & eosio::fixed_bytes::get_array () const
```


Get the contained std::array 

### function <a id="1a08cee20b3d10e105992a915b35721eb7" href="#1a08cee20b3d10e105992a915b35721eb7">data (3/4)</a>

```cpp
auto eosio::fixed_bytes::data ()
```


Get the underlying data of the contained std::array 

### function <a id="1ac5078b186868eb29ddffe4f4c4e1a5f0" href="#1ac5078b186868eb29ddffe4f4c4e1a5f0">data (4/4)</a>

```cpp
auto eosio::fixed_bytes::data () const
```


Get the underlying data of the contained std::array 

### function <a id="1ac2d8051c8675cda490ae406ca35cdea4" href="#1ac2d8051c8675cda490ae406ca35cdea4">size (2/2)</a>

```cpp
auto eosio::fixed_bytes::size () const
```


Get the size of the contained std::array 

### function <a id="1a0ae918fa4de2ed7b20065b133b1e95c9" href="#1a0ae918fa4de2ed7b20065b133b1e95c9">extract\_as\_byte\_array (2/2)</a>

```cpp
std::array< uint8_t, Size > eosio::fixed_bytes::extract_as_byte_array () const
```


Extract the contained data as an array of bytes


**Returns:**

- the extracted data as array of bytes 




### function <a id="1afeaa78eb715d55b40c00e4c542de64db" href="#1afeaa78eb715d55b40c00e4c542de64db">print</a>

```cpp
void eosio::fixed_bytes::print () const
```


Prints **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** as a hexidecimal string


**Parameters:**


* **val** to be printed 



### function <a id="1abb272f4e962fa15dd78633053bb63d31" href="#1abb272f4e962fa15dd78633053bb63d31">fixed\_bytes (5/8)</a>

```cpp
constexpr eosio::fixed_bytes::fixed_bytes ()
```

Default constructor to **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object. 

Default constructor to **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object which initializes all bytes to zero 

### function <a id="1ad2ca84b3f4fcc67b99e6f7731825789d" href="#1ad2ca84b3f4fcc67b99e6f7731825789d">fixed\_bytes (6/8)</a>

```cpp
eosio::fixed_bytes::fixed_bytes (
    const std::array< word_t, num_words()> & arr
)
```

Constructor to **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object from std::array of **[num\_words()](classeosio_1_1fixed__bytes_a624f3e2c6a33a0197b0d59c6995c47d8.md#1a624f3e2c6a33a0197b0d59c6995c47d8)** word\_t types. 

Constructor to **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object from std::array of **[num\_words()](classeosio_1_1fixed__bytes_a624f3e2c6a33a0197b0d59c6995c47d8.md#1a624f3e2c6a33a0197b0d59c6995c47d8)** word\_t types 

**Parameters:**


* **arr** data 



### function <a id="1a6d082b4eb4541d6b311849939b5a6ea5" href="#1a6d082b4eb4541d6b311849939b5a6ea5">fixed\_bytes (7/8)</a>

```cpp
eosio::fixed_bytes::fixed_bytes (
    const std::array< Word, NumWords > & arr
)
```

Constructor to **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object from std::array of Word types smaller in size than word\_t. 

Constructor to **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object from std::array of Word types smaller in size than word\_t 

**Parameters:**


* **arr** - Source data 



### function <a id="1abdc3879046e86eaaf6e867bce216a5fd" href="#1abdc3879046e86eaaf6e867bce216a5fd">fixed\_bytes (8/8)</a>

```cpp
eosio::fixed_bytes::fixed_bytes (
    const Word(&) arr
)
```

Constructor to **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object from fixed-sized C array of Word types smaller in size than word\_t. 

Constructor to **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object from fixed-sized C array of Word types smaller in size than word\_t 

**Parameters:**


* **arr** - Source data 



### function <a id="1ad54e7bd5c26dc28c579b3987d3a43def" href="#1ad54e7bd5c26dc28c579b3987d3a43def">get\_array (2/2)</a>

```cpp
const auto & eosio::fixed_bytes::get_array () const
```

Get the contained std::array. 

Get the contained std::array 

### function <a id="1a08cee20b3d10e105992a915b35721eb7" href="#1a08cee20b3d10e105992a915b35721eb7">data (3/4)</a>

```cpp
auto eosio::fixed_bytes::data ()
```

Get the underlying data of the contained std::array. 

Get the underlying data of the contained std::array 

### function <a id="1ac5078b186868eb29ddffe4f4c4e1a5f0" href="#1ac5078b186868eb29ddffe4f4c4e1a5f0">data (4/4)</a>

```cpp
auto eosio::fixed_bytes::data () const
```

Get the underlying data of the contained std::array. 

Get the underlying data of the contained std::array 

### function <a id="1ac2d8051c8675cda490ae406ca35cdea4" href="#1ac2d8051c8675cda490ae406ca35cdea4">size (2/2)</a>

```cpp
auto eosio::fixed_bytes::size () const
```

Get the size of the contained std::array. 

Get the size of the contained std::array 

### function <a id="1a0ae918fa4de2ed7b20065b133b1e95c9" href="#1a0ae918fa4de2ed7b20065b133b1e95c9">extract\_as\_byte\_array (2/2)</a>

```cpp
std::array< uint8_t, Size > eosio::fixed_bytes::extract_as_byte_array () const
```

Extract the contained data as an array of bytes. 

Extract the contained data as an array of bytes 

**Returns:**

- the extracted data as array of bytes 




## Friends Documentation

### friend <a id="1a6c144223829998ed986f74db6ac316de" href="#1a6c144223829998ed986f74db6ac316de">operator== (2/2)</a>

```cpp
friend bool eosio::fixed_bytes::operator== (
    const fixed_bytes< Size > & c1,
    const fixed_bytes< Size > & c2
)
```

Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. 

Lexicographically compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2


**Parameters:**


* **c1** - First **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 
* **c2** - Second **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 



**Returns:**

if c1 == c2, return true, otherwise false 




### friend <a id="1ad6c27d9885b209d46c75ce77d9a8662a" href="#1ad6c27d9885b209d46c75ce77d9a8662a">operator!= (2/2)</a>

```cpp
friend bool eosio::fixed_bytes::operator!= (
    const fixed_bytes< Size > & c1,
    const fixed_bytes< Size > & c2
)
```

Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. 

Lexicographically compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2


**Parameters:**


* **c1** - First **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 
* **c2** - Second **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 



**Returns:**

if c1 != c2, return true, otherwise false 




### friend <a id="1adba21b4e48205fb1271a9c9761a30fbc" href="#1adba21b4e48205fb1271a9c9761a30fbc">operator> (2/2)</a>

```cpp
friend bool eosio::fixed_bytes::operator> (
    const fixed_bytes< Size > & c1,
    const fixed_bytes< Size > & c2
)
```

Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. 

Lexicographically compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2


**Parameters:**


* **c1** - First **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 
* **c2** - Second **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 



**Returns:**

if c1 > c2, return true, otherwise false 




### friend <a id="1abae9c23b34c63ab070f03b290e117620" href="#1abae9c23b34c63ab070f03b290e117620">operator< (2/2)</a>

```cpp
friend bool eosio::fixed_bytes::operator< (
    const fixed_bytes< Size > & c1,
    const fixed_bytes< Size > & c2
)
```

Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. 

Lexicographically compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2


**Parameters:**


* **c1** - First **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 
* **c2** - Second **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 



**Returns:**

if c1 < c2, return true, otherwise false 




### friend <a id="1a7e9bf8ad313795fe29b8b11823773b62" href="#1a7e9bf8ad313795fe29b8b11823773b62">operator>= (2/2)</a>

```cpp
friend bool eosio::fixed_bytes::operator>= (
    const fixed_bytes< Size > & c1,
    const fixed_bytes< Size > & c2
)
```

Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. 

Lexicographically compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2


**Parameters:**


* **c1** - First **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 
* **c2** - Second **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 



**Returns:**

if c1 >= c2, return true, otherwise false 




### friend <a id="1a0ab215b30f2c2ccef1384303404e07d8" href="#1a0ab215b30f2c2ccef1384303404e07d8">operator<= (2/2)</a>

```cpp
friend bool eosio::fixed_bytes::operator<= (
    const fixed_bytes< Size > & c1,
    const fixed_bytes< Size > & c2
)
```

Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. 

Lexicographically compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2


**Parameters:**


* **c1** - First **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 
* **c2** - Second **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 



**Returns:**

if c1 <= c2, return true, otherwise false 




### friend <a id="1a6c144223829998ed986f74db6ac316de" href="#1a6c144223829998ed986f74db6ac316de">operator== (2/2)</a>

```cpp
friend bool eosio::fixed_bytes::operator== (
    const fixed_bytes< Size > & c1,
    const fixed_bytes< Size > & c2
)
```

Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. 

Lexicographically compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2


**Parameters:**


* **c1** - First **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 
* **c2** - Second **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 



**Returns:**

if c1 == c2, return true, otherwise false 




### friend <a id="1ad6c27d9885b209d46c75ce77d9a8662a" href="#1ad6c27d9885b209d46c75ce77d9a8662a">operator!= (2/2)</a>

```cpp
friend bool eosio::fixed_bytes::operator!= (
    const fixed_bytes< Size > & c1,
    const fixed_bytes< Size > & c2
)
```

Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. 

Lexicographically compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2


**Parameters:**


* **c1** - First **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 
* **c2** - Second **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 



**Returns:**

if c1 != c2, return true, otherwise false 




### friend <a id="1adba21b4e48205fb1271a9c9761a30fbc" href="#1adba21b4e48205fb1271a9c9761a30fbc">operator> (2/2)</a>

```cpp
friend bool eosio::fixed_bytes::operator> (
    const fixed_bytes< Size > & c1,
    const fixed_bytes< Size > & c2
)
```

Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. 

Lexicographically compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2


**Parameters:**


* **c1** - First **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 
* **c2** - Second **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 



**Returns:**

if c1 > c2, return true, otherwise false 




### friend <a id="1abae9c23b34c63ab070f03b290e117620" href="#1abae9c23b34c63ab070f03b290e117620">operator< (2/2)</a>

```cpp
friend bool eosio::fixed_bytes::operator< (
    const fixed_bytes< Size > & c1,
    const fixed_bytes< Size > & c2
)
```

Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. 

Lexicographically compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2


**Parameters:**


* **c1** - First **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 
* **c2** - Second **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 



**Returns:**

if c1 < c2, return true, otherwise false 




### friend <a id="1a7e9bf8ad313795fe29b8b11823773b62" href="#1a7e9bf8ad313795fe29b8b11823773b62">operator>= (2/2)</a>

```cpp
friend bool eosio::fixed_bytes::operator>= (
    const fixed_bytes< Size > & c1,
    const fixed_bytes< Size > & c2
)
```

Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. 

Lexicographically compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2


**Parameters:**


* **c1** - First **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 
* **c2** - Second **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 



**Returns:**

if c1 >= c2, return true, otherwise false 




### friend <a id="1a0ab215b30f2c2ccef1384303404e07d8" href="#1a0ab215b30f2c2ccef1384303404e07d8">operator<= (2/2)</a>

```cpp
friend bool eosio::fixed_bytes::operator<= (
    const fixed_bytes< Size > & c1,
    const fixed_bytes< Size > & c2
)
```

Compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2. 

Lexicographically compares two **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** variables c1 and c2


**Parameters:**


* **c1** - First **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 
* **c2** - Second **[fixed\_bytes](classeosio_1_1fixed__bytes.md)** object to compare 



**Returns:**

if c1 <= c2, return true, otherwise false 






----------------------------------------
The documentation for this class was generated from the following file: `in/eosio.cdt/libraries/eosiolib/core/eosio/fixed\_bytes.hpp`
