#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, encontrou = 0;

    printf("Digite um numero\n");
    scanf("%d", &n);

    for(int i = n; encontrou == 0; i++){
        if(i % 11 == 0 || i % 13 == 0 || i % 17 == 0){
            encontrou = 1;
            printf("O numero e %d", i);
        }
    }

    return 0;
}
