#include <stdio.h>
#include <stdlib.h>

int total = 1;

void factorial(int limit, int n) {
    if(n > limit) {
        return;
    }else{
        total *= n;
        factorial(limit, n + 1);
    }
}

int main()
{
    int limit;

    printf("Write a number\n");
    scanf("%d", &limit);

    factorial(limit, 1);

    printf("The factorial to %d is %d", limit, total);

    return 0;
}
