#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Digite um numero\n");
    scanf("%d", &n);

    for(int i = 1; i <= n * 2; i += 2){
        printf("%d\n", i);
    }

    return 0;
}
