#include <stdio.h>

void printUniqueElements(int arr[], int size) {
    // Iterate through each element in the array
    for (int i = 0; i < size; i++) {
        int j;
        // Check if the current element is already printed
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j])
                break;
        }
        // If the current element is not already printed, print it
        if (i == j)
            printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {2, 4, 6, 4, 8, 6, 10, 12, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Unique elements in the array: ");
    printUniqueElements(arr, size);

    return 0;
}
