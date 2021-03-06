    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    void main() {

        //Para usar acentos
        setlocale(LC_ALL,"");

        //Crie um algoritmo que leia 3 valores para um vetor de 3 posições
        //e depois calcule a média dos valores acessando o vetor.
        int vetorA[3], aux, media;

        //Forma mais simples
        printf("Digite um valor:");
        scanf("%d", &vetorA[0]);
        printf("Digite um valor:");
        scanf("%d", &vetorA[1]);
        printf("Digite um valor:");
        scanf("%d", &vetorA[2]);
        printf("\nvetorA[0] -> %d ", vetorA[0]);
        printf("\nvetorA[1] -> %d ", vetorA[1]);
        printf("\nvetorA[2] -> %d ", vetorA[2]);
        media = (vetorA[0] + vetorA[1] + vetorA[2]) / 3;
        printf("\n Média: %d", media);

        //Outra Forma
        int i;
        for(i = 0; i < 3; i++){
            printf("\nDigite um valor para a posição vetor[%d]", i);
            scanf("%d",&vetorA[i]);
            media = media + vetorA[i];
        }
        printf("\n Média: %d", media/3);


    }


//Versão 2 (Adaptando com o tamanho do vetor desejado

    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    void main() {

        //Para usar acentos
        setlocale(LC_ALL,"");

        //Crie um algoritmo que leia um tamanho um vetor e preencha cada posição com um valor
        //depois calcule a média dos valores acessando o vetor.
        int tamanho;
        printf("Qual será o tamanho do vetor?");
        scanf("%d", &tamanho);

        float vetor[tamanho], soma;

        int i;
        for(i = 0; i < tamanho; i++){
            printf("Digite um valor:");
            scanf("%f", &vetor[i]);
            soma = soma + vetor[i];
        }
        for(i = 0; i < tamanho; i++){
            printf("\nvetor[%d] = %.2f",i, vetor[i]);
        }

        printf("\nA média dos valores é: %.2f", soma/tamanho);

    }
