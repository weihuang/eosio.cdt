---
search:
    keywords: ['eosio::symbol_code', 'symbol_code', 'symbol_code', 'symbol_code', 'is_valid', 'length', 'raw', 'operator bool', 'write_as_string', 'to_string', 'print', 'symbol_code', 'symbol_code', 'symbol_code', 'is_valid', 'length', 'raw', 'operator bool', 'write_as_string', 'to_string', 'operator==', 'operator!=', 'operator<', 'operator==', 'operator!=', 'operator<', 'operator<<', 'operator>>']
---

# class eosio::symbol\_code

[**Class List**](annotated.md) **>** [**eosio**](namespaceeosio.md) **::** [**symbol\_code**](classeosio_1_1symbol__code.md)


## Public Functions

|Type|Name|
|-----|-----|
|constexpr|[**symbol\_code**](classeosio_1_1symbol__code_a9d8538c2ff41df391b45cfb6190a1ed4.md#1a9d8538c2ff41df391b45cfb6190a1ed4) () <br>Construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** object defaulting to a value of 0. |
|constexpr|[**symbol\_code**](classeosio_1_1symbol__code_a5a95bedec99aff1d70a782b365bc28d0.md#1a5a95bedec99aff1d70a782b365bc28d0) (uint64\_t raw) <br>Construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** object initialising value with raw. |
|constexpr|[**symbol\_code**](classeosio_1_1symbol__code_afba617179edadad41667b707176943fc.md#1afba617179edadad41667b707176943fc) (std::string\_view str) <br>Construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** object initialising value with str. |
|constexpr bool|[**is\_valid**](classeosio_1_1symbol__code_a87acfd4b3bd04ca4b9ba84f6ea12d5d0.md#1a87acfd4b3bd04ca4b9ba84f6ea12d5d0) () const |
|constexpr uint32\_t|[**length**](classeosio_1_1symbol__code_adf291364853aa746ddc32942881b2e64.md#1adf291364853aa746ddc32942881b2e64) () const |
|constexpr uint64\_t|[**raw**](classeosio_1_1symbol__code_a9c4430961f11cf7a207ac7d4c4827210.md#1a9c4430961f11cf7a207ac7d4c4827210) () const |
|constexpr|[**operator bool**](classeosio_1_1symbol__code_a9b45275437c716ebc9ba95d199c04ed1.md#1a9b45275437c716ebc9ba95d199c04ed1) () const |
|char \*|[**write\_as\_string**](classeosio_1_1symbol__code_a9f6752ffa0fd8b10d2531b18978aeb9e.md#1a9f6752ffa0fd8b10d2531b18978aeb9e) (char \* begin, char \* end) const <br>Writes the **[symbol\_code](classeosio_1_1symbol__code.md)** as a string to the provided char buffer. |
|std::string|[**to\_string**](classeosio_1_1symbol__code_a075d0d69307bd9180b147a809f07bad5.md#1a075d0d69307bd9180b147a809f07bad5) () const |
|void|[**print**](classeosio_1_1symbol__code_aac85cf2211c7f763232ecc05d473f7ff.md#1aac85cf2211c7f763232ecc05d473f7ff) () const |
|constexpr|[**symbol\_code**](classeosio_1_1symbol__code_a9d8538c2ff41df391b45cfb6190a1ed4.md#1a9d8538c2ff41df391b45cfb6190a1ed4) () <br>Construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** object defaulting to a value of 0. |
|constexpr|[**symbol\_code**](classeosio_1_1symbol__code_a5a95bedec99aff1d70a782b365bc28d0.md#1a5a95bedec99aff1d70a782b365bc28d0) (uint64\_t raw) <br>Construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** object initialising value with raw. |
|constexpr|[**symbol\_code**](classeosio_1_1symbol__code_afba617179edadad41667b707176943fc.md#1afba617179edadad41667b707176943fc) (std::string\_view str) <br>Construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** object initialising value with str. |
|constexpr bool|[**is\_valid**](classeosio_1_1symbol__code_a87acfd4b3bd04ca4b9ba84f6ea12d5d0.md#1a87acfd4b3bd04ca4b9ba84f6ea12d5d0) () const |
|constexpr uint32\_t|[**length**](classeosio_1_1symbol__code_adf291364853aa746ddc32942881b2e64.md#1adf291364853aa746ddc32942881b2e64) () const |
|constexpr uint64\_t|[**raw**](classeosio_1_1symbol__code_a9c4430961f11cf7a207ac7d4c4827210.md#1a9c4430961f11cf7a207ac7d4c4827210) () const |
|constexpr|[**operator bool**](classeosio_1_1symbol__code_a9b45275437c716ebc9ba95d199c04ed1.md#1a9b45275437c716ebc9ba95d199c04ed1) () const |
|char \*|[**write\_as\_string**](classeosio_1_1symbol__code_a9f6752ffa0fd8b10d2531b18978aeb9e.md#1a9f6752ffa0fd8b10d2531b18978aeb9e) (char \* begin, char \* end) const <br>Writes the **[symbol\_code](classeosio_1_1symbol__code.md)** as a string to the provided char buffer. |
|std::string|[**to\_string**](classeosio_1_1symbol__code_a075d0d69307bd9180b147a809f07bad5.md#1a075d0d69307bd9180b147a809f07bad5) () const <br>Returns the name value as a string by calling **[write\_as\_string()](classeosio_1_1symbol__code_a9f6752ffa0fd8b10d2531b18978aeb9e.md#1a9f6752ffa0fd8b10d2531b18978aeb9e)** and returning the buffer produced by **[write\_as\_string()](classeosio_1_1symbol__code_a9f6752ffa0fd8b10d2531b18978aeb9e.md#1a9f6752ffa0fd8b10d2531b18978aeb9e)** |


## Friends

|Type|Name|
|-----|-----|
|friend constexpr bool|[**operator==**](classeosio_1_1symbol__code_a679be838b5e39b806fa42577124a214a.md#1a679be838b5e39b806fa42577124a214a)|
|friend constexpr bool|[**operator!=**](classeosio_1_1symbol__code_acd21f55772dbdf25fe5dbc182683fee0.md#1acd21f55772dbdf25fe5dbc182683fee0)|
|friend constexpr bool|[**operator<**](classeosio_1_1symbol__code_a8dd79cc2a20dc7bf2788fd6416003891.md#1a8dd79cc2a20dc7bf2788fd6416003891)<br>Less than operator. |
|friend constexpr bool|[**operator==**](classeosio_1_1symbol__code_a679be838b5e39b806fa42577124a214a.md#1a679be838b5e39b806fa42577124a214a)<br>Equivalency operator. |
|friend constexpr bool|[**operator!=**](classeosio_1_1symbol__code_acd21f55772dbdf25fe5dbc182683fee0.md#1acd21f55772dbdf25fe5dbc182683fee0)<br>Inverted equivalency operator. |
|friend constexpr bool|[**operator<**](classeosio_1_1symbol__code_a8dd79cc2a20dc7bf2788fd6416003891.md#1a8dd79cc2a20dc7bf2788fd6416003891)<br>Less than operator. |
|friend DataStream &|[**operator<<**](classeosio_1_1symbol__code_aa9ceec9882934db32f2969d9565f881f.md#1aa9ceec9882934db32f2969d9565f881f)<br>Serialize a **[symbol\_code](classeosio_1_1symbol__code.md)**. |
|friend DataStream &|[**operator>>**](classeosio_1_1symbol__code_a812a935043df642e21d00b1b46b14260.md#1a812a935043df642e21d00b1b46b14260)<br>Deserialize a **[symbol\_code](classeosio_1_1symbol__code.md)**. |


## Detailed Description

**[Stores](struct_stores.md)** the symbol code as a uint64\_t value 
## Public Functions Documentation

### function <a id="1a9d8538c2ff41df391b45cfb6190a1ed4" href="#1a9d8538c2ff41df391b45cfb6190a1ed4">symbol\_code (4/6)</a>

```cpp
constexpr eosio::symbol_code::symbol_code ()
```

Construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** object defaulting to a value of 0. 

Default constructor, construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** 

### function <a id="1a5a95bedec99aff1d70a782b365bc28d0" href="#1a5a95bedec99aff1d70a782b365bc28d0">symbol\_code (5/6)</a>

```cpp
explicit constexpr eosio::symbol_code::symbol_code (
    uint64_t raw
)
```

Construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** object initialising value with raw. 

Construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** given a scoped enumerated type of raw (uint64\_t).


**Parameters:**


* **raw** - The raw value which is a scoped enumerated type of unit64\_t 



### function <a id="1afba617179edadad41667b707176943fc" href="#1afba617179edadad41667b707176943fc">symbol\_code (6/6)</a>

```cpp
explicit constexpr eosio::symbol_code::symbol_code (
    std::string_view str
)
```

Construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** object initialising value with str. 

Construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** given an string.


**Parameters:**


* **str** - The string value which validated then converted to unit64\_t 



### function <a id="1a87acfd4b3bd04ca4b9ba84f6ea12d5d0" href="#1a87acfd4b3bd04ca4b9ba84f6ea12d5d0">is\_valid (2/2)</a>

```cpp
constexpr bool eosio::symbol_code::is_valid () const
```


Checks if the symbol code is valid 

**Returns:**

true - if symbol is valid 




### function <a id="1adf291364853aa746ddc32942881b2e64" href="#1adf291364853aa746ddc32942881b2e64">length (2/2)</a>

```cpp
constexpr uint32_t eosio::symbol_code::length () const
```


Returns the character length of the provided symbol


**Returns:**

length - character length of the provided symbol 




### function <a id="1a9c4430961f11cf7a207ac7d4c4827210" href="#1a9c4430961f11cf7a207ac7d4c4827210">raw (2/2)</a>

```cpp
constexpr uint64_t eosio::symbol_code::raw () const
```


Casts a symbol code to raw


**Returns:**

Returns an instance of raw based on the value of a **[symbol\_code](classeosio_1_1symbol__code.md)** 




### function <a id="1a9b45275437c716ebc9ba95d199c04ed1" href="#1a9b45275437c716ebc9ba95d199c04ed1">operator bool (2/2)</a>

```cpp
explicit constexpr eosio::symbol_code::operator bool () const
```


Explicit cast to bool of the **[symbol\_code](classeosio_1_1symbol__code.md)**


**Returns:**

Returns true if the **[symbol\_code](classeosio_1_1symbol__code.md)** is set to the default value of 0 else true. 




### function <a id="1a9f6752ffa0fd8b10d2531b18978aeb9e" href="#1a9f6752ffa0fd8b10d2531b18978aeb9e">write\_as\_string (2/2)</a>

```cpp
char * eosio::symbol_code::write_as_string (
    char * begin,
    char * end
) const
```

Writes the **[symbol\_code](classeosio_1_1symbol__code.md)** as a string to the provided char buffer. 

Writes the **[symbol\_code](classeosio_1_1symbol__code.md)** as a string to the provided char buffer


**Precondition:**

Appropriate Size Precondition: (begin + 7) <= end and (begin + 7) does not overflow 




**Precondition:**

Valid Memory Region Precondition: The range [begin, end) must be a valid range of memory to write to. 




**Parameters:**


* **begin** - The start of the char buffer 
* **end** - Just past the end of the char buffer 



**Returns:**

char\* - Just past the end of the last character written (returns begin if the Appropriate Size Precondition is not satisfied) 




**Post**

If the Appropriate Size Precondition is satisfied, the range [begin, returned pointer) contains the string representation of the **[symbol\_code](classeosio_1_1symbol__code.md)**. 




### function <a id="1a075d0d69307bd9180b147a809f07bad5" href="#1a075d0d69307bd9180b147a809f07bad5">to\_string (2/2)</a>

```cpp
std::string eosio::symbol_code::to_string () const
```


Returns the name value as a string by calling **[write\_as\_string()](classeosio_1_1symbol__code_a9f6752ffa0fd8b10d2531b18978aeb9e.md#1a9f6752ffa0fd8b10d2531b18978aeb9e)** and returning the buffer produced by **[write\_as\_string()](classeosio_1_1symbol__code_a9f6752ffa0fd8b10d2531b18978aeb9e.md#1a9f6752ffa0fd8b10d2531b18978aeb9e)** 

### function <a id="1aac85cf2211c7f763232ecc05d473f7ff" href="#1aac85cf2211c7f763232ecc05d473f7ff">print</a>

```cpp
void eosio::symbol_code::print () const
```


Prints a **[symbol\_code](classeosio_1_1symbol__code.md)**


**Parameters:**


* **sym\_code** symbol code to be printed 



### function <a id="1a9d8538c2ff41df391b45cfb6190a1ed4" href="#1a9d8538c2ff41df391b45cfb6190a1ed4">symbol\_code (4/6)</a>

```cpp
constexpr eosio::symbol_code::symbol_code ()
```

Construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** object defaulting to a value of 0. 

Default constructor, construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** 

### function <a id="1a5a95bedec99aff1d70a782b365bc28d0" href="#1a5a95bedec99aff1d70a782b365bc28d0">symbol\_code (5/6)</a>

```cpp
explicit constexpr eosio::symbol_code::symbol_code (
    uint64_t raw
)
```

Construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** object initialising value with raw. 

Construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** given a scoped enumerated type of raw (uint64\_t).


**Parameters:**


* **raw** - The raw value which is a scoped enumerated type of unit64\_t 



### function <a id="1afba617179edadad41667b707176943fc" href="#1afba617179edadad41667b707176943fc">symbol\_code (6/6)</a>

```cpp
explicit constexpr eosio::symbol_code::symbol_code (
    std::string_view str
)
```

Construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** object initialising value with str. 

Construct a new **[symbol\_code](classeosio_1_1symbol__code.md)** given an string.


**Parameters:**


* **str** - The string value which validated then converted to unit64\_t 



### function <a id="1a87acfd4b3bd04ca4b9ba84f6ea12d5d0" href="#1a87acfd4b3bd04ca4b9ba84f6ea12d5d0">is\_valid (2/2)</a>

```cpp
constexpr bool eosio::symbol_code::is_valid () const
```


Checks if the symbol code is valid 

**Returns:**

true - if symbol is valid 




### function <a id="1adf291364853aa746ddc32942881b2e64" href="#1adf291364853aa746ddc32942881b2e64">length (2/2)</a>

```cpp
constexpr uint32_t eosio::symbol_code::length () const
```


Returns the character length of the provided symbol


**Returns:**

length - character length of the provided symbol 




### function <a id="1a9c4430961f11cf7a207ac7d4c4827210" href="#1a9c4430961f11cf7a207ac7d4c4827210">raw (2/2)</a>

```cpp
constexpr uint64_t eosio::symbol_code::raw () const
```


Casts a symbol code to raw


**Returns:**

Returns an instance of raw based on the value of a **[symbol\_code](classeosio_1_1symbol__code.md)** 




### function <a id="1a9b45275437c716ebc9ba95d199c04ed1" href="#1a9b45275437c716ebc9ba95d199c04ed1">operator bool (2/2)</a>

```cpp
explicit constexpr eosio::symbol_code::operator bool () const
```


Explicit cast to bool of the **[symbol\_code](classeosio_1_1symbol__code.md)**


**Returns:**

Returns true if the **[symbol\_code](classeosio_1_1symbol__code.md)** is set to the default value of 0 else true. 




### function <a id="1a9f6752ffa0fd8b10d2531b18978aeb9e" href="#1a9f6752ffa0fd8b10d2531b18978aeb9e">write\_as\_string (2/2)</a>

```cpp
char * eosio::symbol_code::write_as_string (
    char * begin,
    char * end
) const
```

Writes the **[symbol\_code](classeosio_1_1symbol__code.md)** as a string to the provided char buffer. 

Writes the **[symbol\_code](classeosio_1_1symbol__code.md)** as a string to the provided char buffer


**Precondition:**

Appropriate Size Precondition: (begin + 7) <= end and (begin + 7) does not overflow 




**Precondition:**

Valid Memory Region Precondition: The range [begin, end) must be a valid range of memory to write to. 




**Parameters:**


* **begin** - The start of the char buffer 
* **end** - Just past the end of the char buffer 



**Returns:**

char\* - Just past the end of the last character written (returns begin if the Appropriate Size Precondition is not satisfied) 




**Post**

If the Appropriate Size Precondition is satisfied, the range [begin, returned pointer) contains the string representation of the **[symbol\_code](classeosio_1_1symbol__code.md)**. 




### function <a id="1a075d0d69307bd9180b147a809f07bad5" href="#1a075d0d69307bd9180b147a809f07bad5">to\_string (2/2)</a>

```cpp
std::string eosio::symbol_code::to_string () const
```

Returns the name value as a string by calling **[write\_as\_string()](classeosio_1_1symbol__code_a9f6752ffa0fd8b10d2531b18978aeb9e.md#1a9f6752ffa0fd8b10d2531b18978aeb9e)** and returning the buffer produced by **[write\_as\_string()](classeosio_1_1symbol__code_a9f6752ffa0fd8b10d2531b18978aeb9e.md#1a9f6752ffa0fd8b10d2531b18978aeb9e)** 

Returns the **[symbol\_code](classeosio_1_1symbol__code.md)** as a string. 

## Friends Documentation

### friend <a id="1a679be838b5e39b806fa42577124a214a" href="#1a679be838b5e39b806fa42577124a214a">operator== (2/2)</a>

```cpp
friend constexpr bool eosio::symbol_code::operator== (
    const symbol_code & a,
    const symbol_code & b
)
```


Equivalency operator. Returns true if a == b (are the same)


**Returns:**

boolean - true if both provided symbol\_codes are the same 




### friend <a id="1acd21f55772dbdf25fe5dbc182683fee0" href="#1acd21f55772dbdf25fe5dbc182683fee0">operator!= (2/2)</a>

```cpp
friend constexpr bool eosio::symbol_code::operator!= (
    const symbol_code & a,
    const symbol_code & b
)
```


Inverted equivalency operator. Returns true if a != b (are different)


**Returns:**

boolean - true if both provided symbol\_codes are not the same 




### friend <a id="1a8dd79cc2a20dc7bf2788fd6416003891" href="#1a8dd79cc2a20dc7bf2788fd6416003891">operator< (2/2)</a>

```cpp
friend constexpr bool eosio::symbol_code::operator< (
    const symbol_code & a,
    const symbol_code & b
)
```

Less than operator. 

Less than operator. Returns true if a < b. 

**Returns:**

boolean - true if **[symbol\_code](classeosio_1_1symbol__code.md)** `a` is less than `b` 




### friend <a id="1a679be838b5e39b806fa42577124a214a" href="#1a679be838b5e39b806fa42577124a214a">operator== (2/2)</a>

```cpp
friend constexpr bool eosio::symbol_code::operator== (
    const symbol_code & a,
    const symbol_code & b
)
```

Equivalency operator. 

Equivalency operator. Returns true if a == b (are the same)


**Returns:**

boolean - true if both provided symbol\_codes are the same 




### friend <a id="1acd21f55772dbdf25fe5dbc182683fee0" href="#1acd21f55772dbdf25fe5dbc182683fee0">operator!= (2/2)</a>

```cpp
friend constexpr bool eosio::symbol_code::operator!= (
    const symbol_code & a,
    const symbol_code & b
)
```

Inverted equivalency operator. 

Inverted equivalency operator. Returns true if a != b (are different)


**Returns:**

boolean - true if both provided symbol\_codes are not the same 




### friend <a id="1a8dd79cc2a20dc7bf2788fd6416003891" href="#1a8dd79cc2a20dc7bf2788fd6416003891">operator< (2/2)</a>

```cpp
friend constexpr bool eosio::symbol_code::operator< (
    const symbol_code & a,
    const symbol_code & b
)
```

Less than operator. 

Less than operator. Returns true if a < b. 

**Returns:**

boolean - true if **[symbol\_code](classeosio_1_1symbol__code.md)** `a` is less than `b` 




### friend <a id="1aa9ceec9882934db32f2969d9565f881f" href="#1aa9ceec9882934db32f2969d9565f881f">operator<<</a>

```cpp
friend DataStream & eosio::symbol_code::operator<< (
    DataStream & ds,
    const eosio::symbol_code sym_code
)
```

Serialize a **[symbol\_code](classeosio_1_1symbol__code.md)**. 

Serialize a **[symbol\_code](classeosio_1_1symbol__code.md)** into a stream


**Parameters:**


* **ds** - The stream to write 
* **sym** - The value to serialize 



**Template parameters:**


* **DataStream** - Type of datastream buffer 



**Returns:**

DataStream& - Reference to the datastream 




### friend <a id="1a812a935043df642e21d00b1b46b14260" href="#1a812a935043df642e21d00b1b46b14260">operator>></a>

```cpp
friend DataStream & eosio::symbol_code::operator>> (
    DataStream & ds,
    eosio::symbol_code & sym_code
)
```

Deserialize a **[symbol\_code](classeosio_1_1symbol__code.md)**. 

Deserialize a **[symbol\_code](classeosio_1_1symbol__code.md)** from a stream


**Parameters:**


* **ds** - The stream to read 
* **symbol** - The destination for deserialized value 



**Template parameters:**


* **DataStream** - Type of datastream buffer 



**Returns:**

DataStream& - Reference to the datastream 






----------------------------------------
The documentation for this class was generated from the following file: `in/eosio.cdt/libraries/eosiolib/core/eosio/symbol.hpp`
