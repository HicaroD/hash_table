# Hash table
Hash table implementation in C

## Goals

1. Learn how hash tables work.

## Implementations

1. [Linear](./linear)

I implemented a linear algorithm to read a list of items of a hash table. That solution is fine in terms of performance if you
have very few elements (like 30 or 40 elements). For very small set of data, linear search can actually be faster than a binary
search. However, as soon as data gets larger and larger, linear search becames very inneficient compared to binary search.
That's why binary search wins, for the most part of the time.

2. [Binary search](./binary_search)

I implemented a binary search algorithm to get the value of some key in a list of **sorted items**. This implementation is
better than the last one because it scales better. It will be faster even for very huge sets of data. The problem is the items
should be sorted, otherwise binary search will be pointless. 

3. [Hash tables](./hash_table)

Basically, I used a hash function in order to convert the key (generally a string) into a numeric value. With that numeric
value, I can use to index the array of elements.

Arrays are the building blocks of a hash table. We're just accessing array elements using its index.

What is a hash function? A hash function is just a function that will take some value, like a string, and turn into a numeric
value. That value will be used later to index the array of elements. For every input, a hash function should generate a different
numeric value. When a hash function generate the same value for different inputs, we call it "collision". There a lot of
hash functions out there, I choose [FNV-1a hash](https://en.wikipedia.org/wiki/Fowler%E2%80%93Noll%E2%80%93Vo_hash_function#FNV-1a_hash).

To avoid collisions, we'll be using [linear probing](https://en.wikipedia.org/wiki/Linear_probing). However, there are several
ways to avoid collision, like using a linked list to store values that are hashed with the same value, but this solution requires
more memory compared to linear probing and scanning through pointers are slower than scanning throught an array.

But, how does linear probing solves the problem of collision? Every time a collision happens, our algorithm will try to search
for the next free space in the array to store the value. That is it.

## TODOs

1. Method for removing key from hash table

## License
This project is licensed under the MIT license. See [LICENSE](LICENSE).
