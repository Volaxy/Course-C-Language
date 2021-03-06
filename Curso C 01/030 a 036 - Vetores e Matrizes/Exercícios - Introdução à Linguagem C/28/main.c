#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10], v1[10], v2[10], ve1 = 0, ve2 = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero\n");
        v[i] = rand() % 100;
    }

    for(int i = 0; i < 10; i++){
        if(v[i] % 2 != 0){
            v1[ve1] = v[i];
            ve1++;
        }else{
            v2[ve2] = v[i];
            ve2++;
        }
    }

    printf("Os elementos utilizados de v1 e v2 e %d e %d", ve1, ve2);

    return 0;
}
