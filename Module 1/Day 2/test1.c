#include <stdio.h>
int main() {
    double x = 0.7;
    unsigned long long int* p = (unsigned long long int*) &x;
    unsigned long long int exponent = (*p & 0x7FF0000000000000) >> 52;

    // Print exponent in hexadecimal format
    printf("Exponent in hexadecimal: 0x%llx\n", exponent);

    // Print exponent in binary format
    printf("Exponent in binary: 0b");
    for (int i = 11; i >= 0; i--) {
        unsigned long long int bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
    printf("\n");

    return 0;
}

