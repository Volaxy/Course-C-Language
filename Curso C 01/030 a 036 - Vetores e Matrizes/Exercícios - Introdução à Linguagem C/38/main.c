#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[10], v2[10], aux;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        scanf("%d", &v1[i]);

        v2[i] = v1[i];

        for(int j = 0; j <= i; j++){
            for(int k = j + 1; k <= i; k++){
                if(v2[j] > v2[k]){
                    aux = v2[j];
                    v2[j] = v2[k];
                    v2[k] = aux;
                }
            }
        }

        for(int u = 0; u <= i; u++){
            printf("Vetor ordenado: %d\n", v2[u]);
        }
    }

    return 0;
}
