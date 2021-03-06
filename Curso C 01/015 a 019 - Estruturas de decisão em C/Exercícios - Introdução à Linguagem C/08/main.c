#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    printf("Digite as notas de 2 alunos\n");
    scanf("%f %f", &n1, &n2);

    if(n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10) {
        printf("Nota invalida\n");
    }else{
        printf("Media das notas e %f", (n1 + n2) / 2);
    }

    return 0;
}
