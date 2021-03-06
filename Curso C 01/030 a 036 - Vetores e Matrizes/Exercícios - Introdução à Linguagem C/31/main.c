#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[10], v2[10], uniao[20];

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        v1[i] = rand() % 50;
    }

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        v2[i] = rand() % 50;
    }

    for(int i = 0; i < 10; i++){
        uniao[i] = v1[i];
    }

    for(int i = 10; i < 20; i++){
        uniao[i] = v2[i - 10];
    }

    int diferente = 1;

    for(int i = 0; i < 20; i++){
        for(int j = i + 1; j < 20; j++){
            if(uniao[i] == uniao[j]){
                diferente = 0;
            }
        }

        if(diferente == 1){
            printf("%d\n", uniao[i]);
        }else{
            diferente = 1;
        }
    }

    return 0;
}
