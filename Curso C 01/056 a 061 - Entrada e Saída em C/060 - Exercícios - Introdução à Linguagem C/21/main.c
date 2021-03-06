#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file = fopen("arq.bin", "wb");
    int students;

    printf("Write the number of students\n");
    scanf("%d", &students);

    int notes[students];
    char names[students][20];

    for(int i = 0; i < students; i++) {
        printf("Write the name of student and the final note\n");
        scanf("%s", names[i]);
        scanf("%d", &notes[i]);
    }

    for(int i = 0; i < students; i++) {
        fprintf(file, "%s %d\n", names[i], notes[i]);
    }

    fclose(file);
    file = fopen("arq.bin", "r");

    int bestnote = 0, note;
    char beststudent[20], student[20];

    while(1) {
        fscanf(file, "%s", &student);
        fscanf(file, "%d", &note);

        if(note > bestnote) {
            bestnote = note;
            strcpy(beststudent, student);
        }

        if(feof(file)) {
            break;
        }
    }

    printf("The student who has the best note is %s with %d points", beststudent, bestnote);

    fclose(file);

    return 0;
}
