#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("arq.txt", "w");
    char letter;

    do {
        fflush(stdin);
        printf("Write a character\n");
        scanf("%c", &letter);

        if(letter != '0') {
            fputc(letter, file);
        }
    }while(letter != '0');

    fclose(file);
    file = fopen("arq.txt", "r");

    while((letter = getc(file)) != EOF) {
        printf("%c", letter);
    }

    fclose(file);

    return 0;
}
