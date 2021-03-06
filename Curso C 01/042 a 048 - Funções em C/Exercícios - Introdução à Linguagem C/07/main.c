#include <stdio.h>
#include <stdlib.h>

void fahrenheit(float c) {
    int f = c * (9 / 5) + 32;
    printf("The temperature at fahrenheit is %f", f);
}

int main()
{
    float c;
    printf("Write the temperature at degrees Celsius\n");
    scanf("%f", &c);

    fahrenheit(c);

    return 0;
}
