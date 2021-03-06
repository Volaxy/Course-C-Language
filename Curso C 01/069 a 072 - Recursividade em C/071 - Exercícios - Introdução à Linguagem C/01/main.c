#include <stdio.h>
#include <stdlib.h>

int soma = 0;

int somatory(int limit, int n) {
    if(n > limit) {
        return soma;
    }else{
        soma += n;
        somatory(limit, n + 1);
    }
}

int main()
{
    int nl;

    printf("Write a number\n");
    scanf("%d", &nl);

    int total = somatory(nl, 1);

    printf("The total of some is %d", total);

    return 0;
}
