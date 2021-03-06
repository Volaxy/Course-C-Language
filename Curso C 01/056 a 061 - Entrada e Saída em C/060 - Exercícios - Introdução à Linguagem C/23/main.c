#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1 = fopen("emp.txt", "w");
    int years[5], year;
    char names[5][20], name[20];

    for(int i = 0; i < 5; i++) {
        printf("Write the name of employer and the year of service\n");
        scanf("%s %d", names[i], &years[i]);

        fprintf(file1, "%s %d\n", names[i], years[i]);
    }

    fclose(file1);
    file1 = fopen("emp.txt", "r");

    for(int i = 0; i < 5; i++) {
        fscanf(file1, "%s", name);
        fscanf(file1, "%d", &year);

        printf("Name: %s | Years of job: %d\n", name, year);
    }

    fclose(file1);

    return 0;
}
