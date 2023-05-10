#include <stdio.h>

int main()
{
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("\nX++: %d\n", a);
    printf("++X: %d\n", (a + 1));
    printf("X--: %d\n", a);
    printf("--X: %d\n", (a - 1));

    scanf("%d", &a);
    scanf("%d", &b);

    printf("\nIncremented Value: %d\n", a + b);
    printf("\nDecremented Value: %d\n", a - b);

    scanf("%d", &a);
    scanf("%d", &b);

    printf("\nMultiplication Value: %d\n", a * b);
    printf("\nDivision Value: %d\n", a / b);

    return 0;
}
