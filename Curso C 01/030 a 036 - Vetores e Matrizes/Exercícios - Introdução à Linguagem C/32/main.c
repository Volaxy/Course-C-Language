#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[5], v2[5], uniao[10];

    for(int i = 0; i < 5; i++){
        v1[i] = rand() % 50;
    }

    for(int i = 0; i < 5; i++){
        v2[i] = rand() % 50;
    }

    for(int i = 0; i < 5; i++){
        printf("Primeiro vetor: %d\n", v1[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("Segundo vetor: %d\n", v2[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("Soma entre os elementos: %d\n", v1[i] + v2[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("Multiplicacao entre os elementos: %d\n", v1[i] * v2[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("Diferenca entre os elementos: %d\n", v1[i] - v2[i]);
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(v1[i] == v2[j]){
                printf("Valores iguais: %d\n", v1[i]);
            }
        }
    }

    for(int i = 0; i < 5; i++){
        uniao[i] = v1[i];
    }

    for(int i = 0; i < 5; i++){
        uniao[i + 5] = v2[i];
    }

    for(int i = 0; i < 10; i++){
        printf("%d\n", uniao[i]);
    }

    return 0;
}
