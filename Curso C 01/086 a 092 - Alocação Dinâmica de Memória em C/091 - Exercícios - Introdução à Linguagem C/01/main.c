#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;

    p = (int*)malloc(5 * sizeof(int));

    for(int i = 0; i < 5; i++) {
        printf("Write five numbers\n");
        scanf("%d", &p[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }

    free(p);
    p = NULL;

    return 0;
}
