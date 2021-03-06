#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lenght, *p, multiple, times = 0;

    printf("Write the size of vector\n");
    scanf("%d", &lenght);

    p = (int*) malloc(lenght * sizeof(int));

    for(int i = 0; i < lenght; i++) {
        printf("Write a number\n");
        scanf("%d", &p[i]);
    }

    printf("Write the multiple\n");
    scanf("%d", &multiple);

    for(int i = 0; i < lenght; i++) {
        if(p[i] % multiple == 0) {
            times++;
        }
    }

    printf("Number of multiples to %d: %d", multiple, times);

    return 0;
}
