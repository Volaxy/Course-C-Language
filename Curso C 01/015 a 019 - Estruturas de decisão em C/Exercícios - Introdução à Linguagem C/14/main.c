#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, media;
    printf("Digite 3 notas\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

    if(media <= 2.9){
        printf("aluno reprovado\n");
    }else{
        if(media <= 4.9){
            printf("Aluno de recuperacao\n");
        }else{
            printf("Aluno aprovado\n");
        }
    }

    printf("Nota: %.2f", media);

    return 0;
}
