#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Digite um numero\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}
