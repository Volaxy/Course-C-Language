#include <stdio.h>
#include <stdlib.h>

int main()
{
    float imposto;
    char e;
    printf("Digite um estado e o valor\n");
    scanf("%c %f", &e, &imposto);

    printf("Valor final: ");

    switch(e){
        case 'm':
            printf("%f", imposto * 0.07);
            break;
        case 's':
            printf("%f", imposto * 0.12);
            break;
        case 'r':
            printf("%f", imposto * 0.15);
            break;
        case 'a':
            printf("%f", imposto * 0.08);
            break;
    }

    return 0;
}
