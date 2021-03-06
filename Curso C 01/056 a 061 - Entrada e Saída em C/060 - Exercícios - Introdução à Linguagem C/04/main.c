#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("arq.txt", "r");
    int vowel = 0, consonants = 0;
    char c;

    while((c = getc(file)) != EOF) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowel++;
        }else{
            if(c != '\n' && c != ' ' && c != '\t') {
                consonants++;
            }
        }
    }

    printf("The file contains %d vowel and %d consonants \n", vowel, consonants);

    fclose(file);

    return 0;
}
