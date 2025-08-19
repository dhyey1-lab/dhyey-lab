#include <stdio.h>

int main() {
    int n, i;
     factorial = 1;


    printf("Enter a number between 1 and 10: ");
    scanf("%d", &n);


    if (n < 1 || n > 10) {
        printf("Error: Number must be between 1 and 10.\n");
        return 1;
    }


    for (i = 1; i <= n; i++) {
        factorial *= i;
    }


    printf("Factorial of %d is %\n", n, factorial);

    return 0;
}
