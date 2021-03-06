#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sphere_calculator(float r) {
    float volume = (4 * 3.14 * pow(r, 3)) / 3;

    printf("The volume to sphere is %f\n", volume);
}

int main()
{
    float radius;

    printf("Write the radius of a any sphere\n");
    scanf("%f", &radius);

    sphere_calculator(radius);

    return 0;
}
