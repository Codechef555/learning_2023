#include <stdio.h>
void swap(void* a, void* b, size_t size) {
    char temp[size];
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main() {
    int num1 = 10;
    int num2 = 20;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2, sizeof(int));

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    double value1 = 3.14;
    double value2 = 2.71;
    printf("Before swap: value1 = %lf, value2 = %lf\n", value1, value2);

    swap(&value1, &value2, sizeof(double));

    printf("After swap: value1 = %lf, value2 = %lf\n", value1, value2);

    return 0;
}

