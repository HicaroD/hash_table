#include <stdio.h>
#include <string.h>

typedef struct {
	char* key;
	int value;
} Item;

Item* linear_search(Item* items, size_t items_size, const char* key) {
	for (int i = 0; i < items_size; i++) {	
		char* current_key = items[i].key;

		if(strcmp(current_key, key) == 0) {
			return &items[i];
		}
	}
	return NULL;
}

int main() {
	Item items[] = {{ "First key", 10 }, { "Second key", 20} };
	char* key = "Second key"; 
	Item* found_item = linear_search(items, 2, key);

	if(!found_item) {
		printf("Item with key '%s' not found\n", key);
		return 1;
	}
	printf("Item with key '%s' found and its value is %d\n", key, found_item->value);

	key = "This key does not exist";
	found_item = linear_search(items, 2, key);

	if(!found_item) {
		printf("Item with key '%s' not found\n", key);
		return 1;
	}
	printf("Item with key '%s' found and its value is %d\n", key, found_item->value);
	return 0;
}
