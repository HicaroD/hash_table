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

## License
This project is licensed under the MIT license. See [LICENSE](LICENSE).
