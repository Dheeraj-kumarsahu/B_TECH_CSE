#include <stdio.h>

int main() {
    int n, i;
    int factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Error handling for negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Loop from 1 up to n
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %d\n", n, factorial);
    }

    return 0;
}
