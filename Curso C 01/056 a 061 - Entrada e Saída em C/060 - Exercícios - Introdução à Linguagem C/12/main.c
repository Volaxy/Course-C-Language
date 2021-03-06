#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("arq.txt", "r");
    int characteres = 0, lines = 1, words = 0, letters[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}, c, word[20];

    while((c = getc(file)) != EOF) {
        if(c == '\n') {
            lines++;
        }

        for(int i = 0; i < 26; i++) {
            if(c == alphabet[i]) {
                letters[i]++;
                characteres++;
            }
        }
    }

    printf("Number of lines: %d\n", lines);

    for(int i = 0; i < 26; i++) {
        printf("Letter %c -> %d\n", alphabet[i], letters[i]);
    }

    printf("Characteres: %d\n", characteres);

    rewind(file);

    while(1) {
        fscanf(file, "%s", word);

        if(feof(file)) {
            break;
        }

        words++;
    }

    printf("Words in the file: %d\n", words);

    fclose(file);

    return 0;
}
