#include <stdio.h>

void insertIntoArray(int arr[], int size, int position, int value) {
    // Shift elements to make space for the new element
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    
    // Insert the new element at the specified position
    arr[position] = value;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int position = 2;  // Position to insert the new element
    int value = 10;    // Value to be inserted
    
    insertIntoArray(arr, size, position, value);
    size++; // Increase the size of the array
    
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
