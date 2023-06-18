#include <stdio.h>
// Function to print the binary representation of a 32-bit integer
void printBits(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        unsigned int bit = (num >> i) & 1;
        printf("%u", bit);
    }
    printf("\n");
}
int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);
    printf("Binary representation: ");
    printBits(num);

    return 0;
}

