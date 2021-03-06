#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("arq.txt", "r");
    int lines = 1;
    char c;

    while((c = getc(file)) != EOF) {
        if(c == '\n') {
            lines++;
        }
    }

    printf("The file contains %d lines\n", lines);

    fclose(file);

    return 0;
}
