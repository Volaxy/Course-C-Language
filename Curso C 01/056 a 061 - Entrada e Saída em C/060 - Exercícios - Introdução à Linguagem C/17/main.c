#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *entry = fopen("structuralist.txt", "r"), *exit = fopen("array.txt", "w");
    int lines, columms, deletes, is1 = 1;

    fscanf(entry, "%d", &lines);
    fscanf(entry, "%d", &columms);
    fscanf(entry, "%d", &deletes);

    int line[deletes], columm[deletes];

    for(int i = 0; i < deletes; i++) {
        fscanf(entry, "%d", &line[i]);
        fscanf(entry, "%d", &columm[i]);
    }

    for(int i = 0; i < lines; i++) {
        for(int j = 0; j < columms; j++) {
            for(int k = 0; k < deletes; k++) {
                if(line[k] == i && columm[k] == j) {
                    fputc('0', exit);
                    is1 = 0;
                }
            }

            if(is1 == 1) {
                fputc('1', exit);
            }else{
                is1 = 1;
            }

            fputc(' ', exit);
        }

        fputc('\n', exit);
    }

    fclose(entry);

    return 0;
}
