#include <stdio.h>
#include <stdlib.h>

int double2x(int number){
    return number * 2;
}

int main()
{
    int n;
    printf("Write at number\n");
    scanf("%d", &n);

    printf("The double value for %d its %d", n, double2x(n));

    return 0;
}
