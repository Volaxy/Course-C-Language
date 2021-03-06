#include <stdio.h>
#include <stdlib.h>

void signal(int n) {
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("!");
        }

        printf("\n");
    }
}

int main()
{
    int n;

    printf("Write a number\n");
    scanf("%d", &n);

    signal(n);

    return 0;
}
