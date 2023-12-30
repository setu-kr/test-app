#include <stdio.h>

int isPresent(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return 1;  // Element is present
        }
    }
    return 0;  // Element is not present
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    scanf("%d",&target);
    
    if (isPresent(arr, size, target)) {
        printf("%d is present in the array.\n", target);
    } else {
        printf("%d is not present in the array.\n", target);
    }
    
    return 0;
}