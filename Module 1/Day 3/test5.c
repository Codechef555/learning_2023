#include <stdio.h>
// Function to find the smallest and largest digits
void findSmallestAndLargestDigits(int num, int *smallest, int *largest) {
    *smallest = 9;
    *largest = 0;

    while (num > 0) {
        int digit = num % 10;

        if (digit < *smallest) {
            *smallest = digit;
        }

        if (digit > *largest) {
            *largest = digit;
        }

        num /= 10;
    }
}

int main() {
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Not valid. Please provide at least two numbers.\n");
        return 0;
    }

    int num;
    printf("Enter number 1: ");
    scanf("%d", &num);

    int smallest, largest;
    findSmallestAndLargestDigits(num, &smallest, &largest);

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        int currentSmallest, currentLargest;
        findSmallestAndLargestDigits(num, &currentSmallest, &currentLargest);

        if (currentSmallest < smallest) {
            smallest = currentSmallest;
        }

        if (currentLargest > largest) {
            largest = currentLargest;
        }
    }

    printf("Smallest digit: %d\n", smallest);
    printf("Largest digit: %d\n", largest);

    return 0;
}

