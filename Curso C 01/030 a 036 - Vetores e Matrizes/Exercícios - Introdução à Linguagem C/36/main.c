#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n[10], aux;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        scanf("%f", &n[i]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(n[i] > n[j]){
                aux = n[j];
                n[j] = n[i];
                n[i] = aux;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        printf("Vetor ordenado: %f\n", n[i]);
    }

    return 0;
}
