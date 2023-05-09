#include <iostream>

int main()
{

    float a,b;

    /* X =  (3.31 * a2 + 2.01 * b3) / (7.16 * b2 + 2.01 * a3) */
    scanf("%f", &a);
    scanf("%f", &b);

    float X;

    X = (3.31 * (a*a) + 2.01 * (b*b*b) / (7.16* (b*b)+ 2.01 * (a*a*a)));

    printf("X = %f",X);

    return 0;
}
