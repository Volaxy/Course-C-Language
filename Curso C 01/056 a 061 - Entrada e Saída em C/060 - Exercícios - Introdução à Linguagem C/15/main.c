#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file1 = fopen("arq1.txt", "r"), *file2 = fopen("arq2.txt", "w");
    int day, month, year, age;
    char name[20], ages[30];

    while(1) {
        fscanf(file1, "%s", name);
        fscanf(file1, "%d", &day);
        fscanf(file1, "%d", &month);
        fscanf(file1, "%d", &year);

        fputs(name, file2);
        fputc(' ', file2);

        //Dates of today
        age = 2020 - year;

        //Checks if birthday has passed
        if(month > 6) {
            age--;
        }else{
            if(month == 6 && day > 24) {
                age--;
            }
        }

        if(age < 18) {
            strcpy(ages, " Menor de idade");
        }else{
            if(ages > 18) {
                strcpy(ages, " Maior de idade");
            }else{
                strcpy(ages, " Entrando na maioridade");
            }
        }

        fprintf(file2, "%d", age);
        fputs(ages, file2);
        fputc('\n', file2);

        if(feof(file1)) {
            break;
        }
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
