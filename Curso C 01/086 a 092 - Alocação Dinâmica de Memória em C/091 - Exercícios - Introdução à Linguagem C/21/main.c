#include <stdio.h>
#include <stdlib.h>

int main()
{
    int line1, line2, column1, column2, **p1, **p2, **p3;

    scanf("%d %d %d %d", &line1, &column1, &line2, &column2);

    p1 = (int**)malloc(line1 * sizeof(int));
    p2 = (int**)malloc(line2 * sizeof(int));

    for(int i = 0; i < line1; i++) {
        p1[i] = (int*)malloc(column1 * sizeof(int));
    }

    for(int i = 0; i < line2; i++) {
        p2[i] = (int*)malloc(column2 * sizeof(int));
    }

    for(int i = 0; i < line1; i++) {
        for(int j = 0; j < column1; j++) {
            printf("%d ", p1[i][j]);
        }

        printf("\n");
    }

    printf("===============\n");

    for(int i = 0; i < line1; i++) {
        for(int j = 0; j < column1; j++) {
            printf("%d ", p2[i][j]);
        }

        printf("\n");
    }

    free(p1);
    p1 = NULL;

    free(p2);
    p2 = NULL;

    return 0;
}
