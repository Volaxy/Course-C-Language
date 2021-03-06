#include <stdio.h>
#include <stdlib.h>

void fatorial(int n){
    int result = 1;

    for(int i = 1; i <= n; i++){
        result *= i;
    }

    printf("The result is %d", result);
}

int main()
{
    int n;
    printf("Write a number\n");
    scanf("%d", &n);

    fatorial(n);

    return 0;
}
