#include <stdio.h>
#include <string.h>

typedef struct {
	char* key;
	int value;
} Item;

Item* binary_search(Item* items, size_t items_size, const char* key) {
	size_t low = 0;
	size_t high = items_size;

	while(low < high) {
		size_t middle = (low + (high - low)) >> 1;
		char* current_key = items[middle].key;
		int comparasion_status = strcmp(current_key, key);

		if(comparasion_status == 0) {
			return &items[middle];
		} else if (comparasion_status < 0) {
			low =  middle + 1;
		} else {
			high = middle;
		}
	}
	return NULL;
}

int main() {
	Item items[] = { {"A", 10}, { "B", 20 }, { "C", 20 }, { "D", 20 }, { "E", 20 }, { "F", 20 } };
	size_t size = sizeof(items) / sizeof(Item);
	char* key = "F";
	Item* found_item = binary_search(items, size, key); 

	if (!found_item) {
		printf("Item with key '%s' was not found\n", key);
		return 1;
	}

	printf("Item with key '%s' was found with value: %d\n", found_item->key, found_item->value);
	return 0;
}
