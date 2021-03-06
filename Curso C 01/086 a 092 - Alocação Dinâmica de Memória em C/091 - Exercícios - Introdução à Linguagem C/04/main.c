#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lenght;
    char *p;

    printf("Write the size of string\n");
    scanf("%d", &lenght);
    fflush(stdin);

    p = (char*) malloc(lenght * sizeof(char));

    for(int i = 0; i < lenght; i++) {
        printf("Write a letter\n");
        scanf("%c", &p[i]);
        fflush(stdin);
    }

    for(int i = 0; i < lenght; i++) {
        if(p[i] != 'a' && p[i] != 'e' && p[i] != 'i' && p[i] != 'o' && p[i] != 'u') {
            printf("%c", p[i]);
        }
    }

    return 0;
}
