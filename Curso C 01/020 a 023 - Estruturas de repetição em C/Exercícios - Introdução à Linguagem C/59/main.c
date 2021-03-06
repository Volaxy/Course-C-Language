#include <stdio.h>
#include <stdlib.h>

int main()
{
    int habitantes, residencial = 0, comercial = 0, industrial = 0;
    float kwh, mediatotal, maior = 0, menor = 10000, soma = 0, somar = 0, somac = 0, somai = 0, totalr, totalc, totali;

    printf("Digite o numero de habitantes e o valor do Kwh\n");
    scanf("%d %f", &habitantes, &kwh);
    printf("======================\n");

    for(int i = 0; i < habitantes; i++){
        int horas;

        printf("Digite o consumo de horas\n");
        scanf("%d", &horas);

        float total = horas * kwh;

        if(total > maior){
            maior = total;
        }else{
            if(total < menor){
                menor = total;
            }
        }

        soma += total;

        mediatotal = soma / habitantes;

        printf("Digite a categoria do consumidor\n");
        printf("1 - Residencial\n");
        printf("2 - Comercial\n");
        printf("3 - Industrial\n");

        int opcao;

        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                residencial++;
                somar += total;
                totalr = somar / residencial;
                break;
            case 2:
                comercial++;
                somac += total;
                totalc = somac / comercial;
                break;
            case 3:
                industrial++;
                somai += total;
                totali = somai / industrial;
        }
    }

    printf("O menor consumo foi %f\n", menor);
    printf("O maior consumo foi %f\n", maior);
    printf("O media total do consumo foi %f\n", mediatotal);
    printf("A media da categoria Residencial foi %f\n", totalr);
    printf("A media da categoria Comercial foi %f\n", totalc);
    printf("A media da categoria Industrial foi %f\n", totali);

    return 0;
}
