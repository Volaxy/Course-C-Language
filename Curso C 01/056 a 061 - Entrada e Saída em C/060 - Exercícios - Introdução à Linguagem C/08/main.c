#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name1[20], name2[20];

    printf("Write the name for files 1 and 2\n");
    scanf("%s %s", name1, name2);

    FILE *file1 = fopen((strcat(name1, "1.txt")), "w"), *file2 = fopen((strcat(name2, "2.txt")), "w");
    char word[20], c;

    do {
        printf("Write some word or enter 'exit' to exit\n");
        scanf("%s", word);

        if(strcmp(word, "exit")) {
            fputs(word, file1);
            fputc('\n', file1);
        }
    }while(strcmp(word, "exit"));

    fclose(file1);
    file1 = fopen(name1, "r");

    while((c = getc(file1)) != EOF) {
        fputc(toupper(c), file2);
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
