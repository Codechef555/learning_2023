#include <stdio.h>

// Function to find the largest number by deleting a single digit from a 4-digit number
int findLargestNumber(int num) {
    int largest = 0;
    int divisor = 1;
    for (int i = 0; i < 4; i++) {
        int temp = num / divisor / 10 * divisor + num % divisor;

        if (temp > largest) {
            largest = temp;
        }

        divisor *= 10;
    }

    return largest;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = findLargestNumber(num);
    printf("Largest number by deleting a single digit: %d\n", largest);

    return 0;
}

