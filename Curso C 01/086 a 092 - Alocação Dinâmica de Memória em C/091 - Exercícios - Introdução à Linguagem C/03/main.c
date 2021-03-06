#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lenght, *p, couple = 0, odd = 0;

    printf("Write the size of vector\n");
    scanf("%d", &lenght);

    p = (int*) malloc(lenght * sizeof(int));

    for(int i = 0; i < lenght; i++) {
        printf("Write a number\n");
        scanf("%d", &p[i]);
    }

    for(int i = 0; i < lenght; i++) {
        if(p[i] % 2 == 0) {
            couple++;
        }else{
            odd++;
        }
    }

    printf("Couplers: %d\n", couple);
    printf("Odds: %d\n", odd);

    return 0;
}
