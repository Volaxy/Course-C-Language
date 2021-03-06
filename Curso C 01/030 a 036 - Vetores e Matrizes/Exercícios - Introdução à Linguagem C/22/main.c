#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], b[10];

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        a[i] = rand() % 1000;
    }

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        b[i] = rand() % 1000;
    }

    int c[10];

    for(int i = 0; i < 10; i++){
        if(i % 2 == 0){
            c[i] = b[i];
        }else{
            c[i] = a[i];
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%d\n", c[i]);

    }

    return 0;
}
