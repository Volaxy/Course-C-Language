#include <stdio.h>
#include <stdlib.h>

void numbers(int n) {
    if(n < 0) {
        printf("Invalid number\n");
    }else{
        int c = n / 100;
        int d = (n - c * 100) / 10;
        int u = n - c * 100 - d * 10;

        printf("The sum to %d is %d", n, c + d + u);
    }
}

int main()
{
    int n;

    printf("Write a number\n");
    scanf("%d", &n);

    numbers(n);

    return 0;
}
