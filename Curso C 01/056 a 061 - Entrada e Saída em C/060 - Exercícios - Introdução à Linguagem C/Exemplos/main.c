#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Função que escreve um caractere no arquivo (fputc)

    /*

        FILE *file = fopen("arq.txt", "w");
        char letra;

        printf("Digite uma caractere\n");
        scanf("%c", &letra);
        fputc(letra, file);

        fclose(file);

    */

    ///////////////////////////////////////////////////////

    //Função que lê um caractere e escreve na tela (fputc)

    /*
        fputc('*', stdout);

    */

    ///////////////////////////////////////////////////////

    //Função que lê um caractere do arquivo (getc)

    /*

        FILE *file = fopen("arq.txt", "r");
        char letra;

        for(int i = 0; i < 15; i++){
            letra = getc(file);
            printf("%c", letra);
        }

        fclose(file);

    */

    ///////////////////////////////////////////////////////

    //Função que lê o próximo caractere digitado no teclado (fgetc)

    /*

    char c;
    c = fgetc(stdin);

    printf("%c", c);

    */

    ///////////////////////////////////////////////////////

    //Função que lê letra (fscanf)

    /*

    FILE *file = fopen("arq.txt", "r");
    char letra;

    while(1) {
        fscanf(file, "%c", &letra);

        if(feof(file)) {
            break;
        }

        printf("%c", letra);
    }

    fclose(file);

    */

    ///////////////////////////////////////////////////////

    //Função que escreve uma string (fputs)

    /*

    FILE *file = fopen("arq.txt", "w");
    char palavra[15] = "gustavo";

    //fputs(palavra, file);
    //fputs(palavra, stdout);

    fclose(file);

    */

    ///////////////////////////////////////////////////////

    //Função que lê uma string (fgets)

    /*
        A função lê a string até que um caractere de nova linha seja lido ou tamanho-1 caracteres tenham sido lidos.
        Se o caractere de nova linha ('\n') for lido, ele fará parte da string, o que não acontecia com gets.
        A string resultante sempre terminará com '\0' (por isto somente tamanho-1 caracteres, no máximo, serão lidos).
        Se ocorrer algum erro, a função devolverá um ponteiro nulo em str.
    */

    /*

    FILE *file = fopen("arq.txt", "r");
    char palavra[15];
    fgets(palavra, 7, file);

    printf("%s", palavra);

    fclose(file);

    */

    ///////////////////////////////////////////////////////

    //Função que escreve um bloco de dados (fwrite)

    /*



    */

    return 0;
}
