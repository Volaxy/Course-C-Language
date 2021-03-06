#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("arq.txt", "w");
    int telephone;
    char name[20], space = ' ';

    do {
        printf("Write the name and telephone\n");
        scanf("%s %d", name, &telephone);

        if(telephone != 0) {
            fputs(name, file);
            fputc(space, file);
            fprintf(file, "%d", telephone);
            fputc('\n', file);
        }
    }while(telephone != 0);

    fclose(file);

    return 0;
}
