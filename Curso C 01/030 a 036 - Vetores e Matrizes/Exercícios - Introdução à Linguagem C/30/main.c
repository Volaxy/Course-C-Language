#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[10], v2[10], iguais[10], c = 0, igual = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        scanf("%d", &v1[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        scanf("%d", &v2[i]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = 1; j < 10; j++){
            if(v1[i] == v2[j]){
                for(int k = 0; k <= c; k++){
                    if(v1[i] == iguais[k]){
                        igual = 1;
                    }
                }

                if(igual == 0){
                    iguais[c] = v1[i];
                    c++;
                }else{
                    igual = 0;
                }
            }
        }
    }

    printf("\n===============================\n");

    for(int i = 0; i <= c; i++){
        printf("%d\n", iguais[i]);
    }

    return 0;
}
