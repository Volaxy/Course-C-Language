#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    int id, n1, n2, n3;
    char name[20];
}Student;

int main()
{
    Student students[5];
    int gn1 = 0;
    float gm = 0, lm = 10;

    for(int i = 0; i < 5; i++) {
        printf("Write the ID of student, name and the three notes\n");
        scanf("%d %s %d %d %d", &students[i].id, students[i].name, &students[i].n1, &students[i].n2, &students[i].n3);
    }

    for(int i = 0; i < 5; i++) {
        if(students[i].n1 > gn1) {
            gn1 = students[i].n1;
        }

        if((students[i].n1 + students[i].n2 + students[i].n3) > gm) {
            gm = students[i].n1 + students[i].n2 + students[i].n3;
        }

        if((students[i].n1 + students[i].n2 + students[i].n3) < lm) {
            lm = students[i].n1 + students[i].n2 + students[i].n3;
        }

        if((students[i].n1 + students[i].n2 + students[i].n3) < 6) {
            printf("You're reproved\n");
        }else{
            printf("You're aproved\n");
        }
    }

    return 0;
}
