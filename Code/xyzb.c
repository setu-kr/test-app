

#include <stdio.h>

void findFrequency(int arr[], int size) {
    int visited[size];
    
    // Initialize visited array with 0
    for (int i = 0; i < size; i++) {
        visited[i] = 0;
    }
    
    for (int i = 0; i < size; i++) {
        if (visited[i] != 1) {
            int count = 1;
            
            // Count the frequency of the current element
            for (int j = i + 1; j < size; j++) {
                if (arr[j] == arr[i]) {
                    visited[j] = 1;
                    count++;
                }
            }
            
            printf("%d occurs %d time(s)\n", arr[i], count);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 3, 1, 5, 6, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    findFrequency(arr, size);
    
    return 0;
}
