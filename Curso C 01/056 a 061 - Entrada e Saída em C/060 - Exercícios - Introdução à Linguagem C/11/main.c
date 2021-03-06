#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[20], word[20], palavra[20];
    printf("Write the name of file and one word\n");
    scanf("%s %s", name, word);

    rename("arq.txt", strcat(name, ".txt"));

    FILE *file = fopen(name, "r");
    int times = 0;

    while(1) {
        fscanf(file, "%s", palavra);

        if(feof(file)) {
            break;
        }

        if(!strcmp(word, palavra)) {
            times++;
        }
    }

    printf("Number of times is %d", times);

    fclose(file);

    return 0;
}
