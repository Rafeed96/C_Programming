#include <iostream>

int main()
{

    int a, b, res;
    float sum;

    scanf("%d", &a);
    scanf("%d", &b);

    res = a + b;
    printf("Addition: %d\n", res);
    res = a - b;
    printf("Subtraction: %d\n", res);
    res = a * b;
    printf("Multiplication: %d\n", res);
    res = a / b;
    printf("Quotient: %d\n", res);
    res = a % b;
    printf("Remainder: %d\n", res);

    return 0;
}