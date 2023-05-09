#include <iostream>

int main()
{

    float a, b;

    /* X =  (3.31 * a2 + 2.01 * b3) / (7.16 * b2 + 2.01 * a3) */
    scanf("%f", &a);
    scanf("%f", &b);

    float aS, aC, bS, bC;

    aS = a * a;
    aC = a * a * a;

    bS = b * b;
    bC = b * b * b;

    float X;

    X = ( 3.31*aS+2.01*bC) / (7.16*bS+ 2.01*aC);

    printf("X = %f", X);

    return 0;
}
