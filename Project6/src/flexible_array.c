#include<stdio.h>
#include<stdlib.h>

typedef struct flex_array {
    int length;
    int data[]; // flexible array member
} flex_array;

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    flex_array *arr;
    printf("Size of flex array: %lu\n", sizeof(flex_array));
    printf("Size of int: %lu\n", sizeof(int));
    arr = (flex_array *)malloc(sizeof(flex_array) + size * sizeof(int));
    arr->length = size;
    for (int i = 0; i < size; i++) {
        arr->data[i] = i;
    }
}