#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Digite um numero\n");
    scanf("%d", &n);

    if(n % 2 != 0){
        for(int i = n; i >= 1; i -= 2){
            printf("%d\n", i);
        }
    }else{
        printf("Numero invalido");
    }

    return 0;
}
