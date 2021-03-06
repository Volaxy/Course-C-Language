#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, bin[10];

    FILE *file = fopen("bin.bin", "wb");

    for(int i = 0; i < 10; i++) {
        for(int j = 9; j >= 0; j--) {
            bin[j] = (numbers[i] % 2) == 0 ? 0 : 1;
            numbers[i] /= 2;
        }

        for(int j = 0; j < 10; j++) {
            fprintf(file, "%d", bin[j]);
        }

        fputc('\n', file);
    }

    fclose(file);

    return 0;
}
