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

    int i;
    float f;
    char c;

    scanf("%d %f %c", &i, &f, &c);

    printf("\nThe integer value: %d\n", i);
    printf("The floating point value: %f\n", f);
    printf("The character value: %c\n", c);

    return 0;
}
