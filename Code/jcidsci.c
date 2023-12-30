#include <stdio.h>

int main() {
    int numbers[10];
    int frequency[10] = {0}; // Initialize frequency array with 0
    int i;

    // Input 10 numbers
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        frequency[numbers[i]]++; // Increment frequency of the input number
    }

    // Print the frequency of each number
    printf("Number\tFrequency\n");
    for (i = 0; i < 10; i++) {
        if (frequency[i] != 0) {
            printf("%d\t%d\n", i, frequency[i]);
        }
    }

    return 0;
}