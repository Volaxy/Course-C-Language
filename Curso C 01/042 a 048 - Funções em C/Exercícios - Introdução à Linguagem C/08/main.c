#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void hypotenuse(float a, float b) {
    float hypotenuse = sqrt(pow(a, 2) + pow(b, 2));
    printf("The hypotenuse of triangle is %f", hypotenuse);
}

int main()
{
    float a, b;
    printf("Write the values A and B of the triangle hypotenuse\n");
    scanf("%f %f", &a, &b);

    hypotenuse(a, b);

    return 0;
}
