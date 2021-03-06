#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um numero\n");
    scanf("%d", &n);

    if(n % 3 == 0 && n % 5 == 0){
        printf("Fim do programa");
    }else{
        if(n % 3 == 0){
            printf("Numero divisivel por 3");
        }else{
            printf("Numero divisivel por 5");
        }
    }

    return 0;
}
