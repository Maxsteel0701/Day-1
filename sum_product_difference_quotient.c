#include <stdio.h>

int main () {

    int a, b, sum, product, difference, quotient;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    product = a * b;
    difference = a - b;
    quotient = a / b;

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Difference: %d\n", difference);
    printf("Quotient: %d\n", quotient);

    return 0;
}   