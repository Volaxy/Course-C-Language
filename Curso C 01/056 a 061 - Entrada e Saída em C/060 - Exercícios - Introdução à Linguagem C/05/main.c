#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("arq.txt", "r");
    int times = 0;
    char c, letter;

    printf("Write some character\n");
    scanf("%c", &letter);

    while((c = getc(file)) != EOF) {
        if(c == letter) {
            times++;
        }
    }

    printf("The number of times is %d", times);

    fclose(file);

    return 0;
}
