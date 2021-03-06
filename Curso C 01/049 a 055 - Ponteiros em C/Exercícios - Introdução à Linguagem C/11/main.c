#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integers[5], n;

    for(int i = 0; i < 5; i++) {
        printf("Write a value\n");
        scanf("%d", &integers[i]);
    }

    for(int i = 0; i < 5; i++) {
        if(integers[i] % 2 == 0) {
            printf("%d\n", &integers[i]);
        }
    }

    return 0;
}
