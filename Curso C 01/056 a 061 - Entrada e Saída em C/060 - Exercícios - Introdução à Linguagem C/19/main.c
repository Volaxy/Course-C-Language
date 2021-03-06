#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *students = fopen("students.txt", "r"), *bestnote = fopen("bestnote.txt", "w");
    int note, greater = 0;
    char name[20], greatername[20];

    while(1) {
        fscanf(students, "%s", name);
        fscanf(students, "%d", &note);

        if(note > greater) {
            strcpy(greatername, name);
            greater = note;
        }

        if(feof(students)) {
            break;
        }
    }

    fputs(greatername, bestnote);
    fputc(' ', bestnote);
    fprintf(bestnote, "%d", greater);

    fclose(students);

    return 0;
}
