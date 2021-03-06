#include <stdio.h>
#include <stdlib.h>

void order(int* x, int* y, int* z) {
    if(*x < *y && *y < *z) {
        printf("%d %d %d", *x, *y, *z);
    }
}

int main()
{
    int n1, n2, n3;

    printf("Write 3 numbers\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    order(&n1, &n2, &n3);

    return 0;
}
