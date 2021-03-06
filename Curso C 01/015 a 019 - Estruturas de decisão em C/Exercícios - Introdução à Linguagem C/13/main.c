#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, media;
    printf("Digite 3 notas diferentes\n");
    scanf("%f %f %f", &a, &b, &c);

    media = (a + b + (c * 2)) / 4;

    if(media >= 60){
        printf("Aluno aprovado");
    } else{
        printf("Aluno reprovado");
    }

    return 0;
}
