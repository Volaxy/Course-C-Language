#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    if(&x > &y) {
        printf("X e maior");
    }else{
        printf("Y e maior");
    }

    return 0;
}
