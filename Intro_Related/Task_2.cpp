#include <stdio.h>

int main()
{
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("My age is: %d\n", a);
    printf("My age is: %d\n", b);

    int i;
    float f;
    char c;

    scanf("%d %f %c", &i, &f, &c);

    printf("\nThe integer value: %d\n", i);
    printf("The floating point value: %f\n", f);
    printf("The character value: %c\n", c);

    return 0;
}
