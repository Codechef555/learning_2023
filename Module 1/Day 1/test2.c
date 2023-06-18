#include <stdio.h>
int findMaxUsingTernaryOperator(int num1, int num2) {
    int max = (num1 > num2) ? num1 : num2;
    return max;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int max = findMaxUsingTernaryOperator(num1, num2);
    printf("The maximum number is: %d\n", max);

    return 0;
}
