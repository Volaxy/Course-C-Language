#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("arq.txt", "w");
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

    return 0;
}
