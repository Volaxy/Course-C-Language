#include <stdio.h>
#include <stdlib.h>

void signal(int n) {
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }

        printf("\n");
    }

    for(int i = n - 1; i > 0; i--){
        for(int j = 1; j <= i; j++){
            printf("*");
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
