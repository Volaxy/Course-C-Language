#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, integers, option, position, value;

    printf("Write the size of integers\n");
    scanf("%d", &integers);

    integers /= 4;

    p = (int*)calloc(integers * sizeof(int));

    do {
        printf("1 - Insert value\n2 - Consult the value\n3 - Exit");
        printf("Select the option\n");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("Write the position and the value\n");
                scanf("%d %d", &position, &value);

                p[position] = value;

                break;
            case 2:
                printf("Write the position\n");
                scanf("%d", &position);

                printf("%d\n", p[position]);

                break;
        }
    }while(option != 3);

    free(p);
    p = NULL;

    return 0;
}
