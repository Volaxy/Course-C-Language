#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lenght, *p;

    printf("Write the size of vector\n");
    scanf("%d", &lenght);

    p = (int*) malloc(lenght * sizeof(int));

    for(int i = 0; i < lenght; i++) {
        printf("Write a number\n");
        scanf("%d", &p[i]);
    }

    for(int i = 0; i < lenght; i++) {
        printf("%d ", p[i]);
    }

    return 0;
}
