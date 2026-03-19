#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct DataItem {
    int key;
    int value;
};

struct DataItem* hashArray[SIZE];

// Hash function
int hashCode(int key) {
    return key % SIZE;
}

// Insert function
void insert(int key, int value) {
    struct DataItem* item = (struct DataItem*) malloc(sizeof(struct DataItem));
    item->key = key;
    item->value = value;

    int index = hashCode(key);

    // Linear probing for collision resolution
    while (hashArray[index] != NULL) {
        index = (index + 1) % SIZE;
    }
    hashArray[index] = item;
}

// Search function
struct DataItem* search(int key) {
    int index = hashCode(key);
    while (hashArray[index] != NULL) {
        if (hashArray[index]->key == key)
            return hashArray[index];
        index = (index + 1) % SIZE;
    }
    return NULL;
}

int main() {
    insert(1, 20);
    insert(11, 70); // collision with key 1
    struct DataItem* item = search(11);
    if (item != NULL)
        printf("Found: %d\n", item->value);
    else
        printf("Not found\n");
    return 0;
}