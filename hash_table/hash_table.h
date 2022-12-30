#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <stdio.h>

typedef struct HashTable HashTable;

HashTable* create_hash_table();

void destroy_hash_table(HashTable* hash_table);

void* get_value(HashTable* hash_table, const char* key);

const char* set_value(HashTable* hash_table, const char* key);

size_t get_hash_table_length(HashTable* hash_table, const char* key);

typedef struct {
	const char* key;
	void* value;

	HashTable* _table;
	size_t _index;
} Item;

Item get_hash_table_iterator(HashTable* table);

bool get_hash_table_next(Item item);
#endif
