#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("arq.txt", "r");
    int vowals = 0;
    char c;

    while((c = getc(file)) != EOF) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowals++;
        }
    }

    printf("The file contains %d vowals\n", vowals);

    fclose(file);

    return 0;
}
