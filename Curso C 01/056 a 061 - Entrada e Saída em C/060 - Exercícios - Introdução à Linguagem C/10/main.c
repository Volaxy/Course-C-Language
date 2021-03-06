#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file1 = fopen("entrada.txt", "r"), *file2 = fopen("saida.txt", "w");
    int population, greater = 0;
    char city[40], greatercity[40];

    while(1) {
        fscanf(file1, "%s", city);

        if(feof(file1)) {
            break;
        }

        fscanf(file1, "%d", &population);

        if(population > greater) {
            greater = population;
            strcpy(greatercity, city);
        }

        printf("%s : %d\n", city, population);
    }

    fputs(greatercity, file2);
    fputs(" -> ", file2);
    fprintf(file2, "%d", greater);

    fclose(file1);
    fclose(file2);

    return 0;
}
