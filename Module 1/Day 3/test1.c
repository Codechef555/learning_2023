#include <stdio.h>
void printAscend(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" ");
    }
}

// Function to print numbers from n to 1
void printDescend(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        printAscend(i);
        printSpaces(2 * (n - i));
        printDescend(i);
        printf("\n");
    }

    return 0;
}

