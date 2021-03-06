#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1 = fopen("arq1.txt", "r"), *file2 = fopen("arq2.txt", "w+");
    char c;

    while((c = getc(file1)) != EOF) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            fputc('*', file2);
        }else{
            fputc(c, file2);
        }
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
