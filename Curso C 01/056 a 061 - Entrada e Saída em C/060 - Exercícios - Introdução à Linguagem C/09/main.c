#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1 = fopen("arq1.txt", "r"), *file2 = fopen("arq2.txt", "r"),*file3 = fopen("arq3.txt", "w");
    char c;

    while((c = getc(file1)) != EOF) {
        fputc(c, file3);
    }

    while((c = getc(file2)) != EOF) {
        fputc(c, file3);
    }

    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}
