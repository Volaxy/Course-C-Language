#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1 = fopen("arq1.txt", "r"), *file2 = fopen("arq2.txt", "w");
    int n1, n2, n3;
    char name[40];

    fscanf(file1, "%s", name);
    fscanf(file1, "%d", &n1);
    fscanf(file1, "%d", &n2);
    fscanf(file1, "%d", &n3);

    fprintf(file2, "%s ", name);

    if(n1 < n2 && n2 < n3) {
        fprintf(file2, "%d %d %d", n1, n2, n3);
    }

    if(n1 < n3 && n3 < n2) {
        fprintf(file2, "%d %d %d", n1, n3, n2);
    }

    if(n2 < n1 && n1 < n3) {
        fprintf(file2, "%d %d %d", n2, n1, n3);
    }

    if(n2 < n3 && n3 < n1) {
        fprintf(file2, "%d %d %d", n2, n3, n1);
    }

    if(n3 < n1 && n1 < n2) {
        fprintf(file2, "%d %d %d", n3, n1, n2);
    }

    if(n3 < n2 && n2 < n1) {
        fprintf(file2, "%d %d %d", n3, n2, n1);
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
