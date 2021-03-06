#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10];

    for(int i = 0; i < 10; i++){
        printf("Digite um valor\n");
        scanf("%d", &v[i]);

        if(v[i] < 0){
            v[i] = 0;
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%d\n", v[i]);
    }

    return 0;
}
