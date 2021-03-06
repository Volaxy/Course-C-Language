#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Write two numbers\n");
    scanf("%d %d", &x, &y);

    printf("The absolute value of difference between x and y is %d", abs(x - y));

    return 0;
}
