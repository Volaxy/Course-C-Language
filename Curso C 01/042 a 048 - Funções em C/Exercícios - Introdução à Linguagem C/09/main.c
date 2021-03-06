#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void volume(int r, int h) {
    float volume = 3.14 * pow(r, 2) * h;
    printf("The cylinder volume is %f", volume);
}

int main()
{
    float radius, height;
    printf("Enter the values of the radius and the height of cylinder\n");
    scanf("%f %f", &radius, &height);

    volume(radius, height);

    return 0;
}
