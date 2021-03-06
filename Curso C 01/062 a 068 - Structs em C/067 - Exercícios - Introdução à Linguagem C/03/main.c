#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    char name[20], course[50];
    int registration;
}Student;

int main()
{
    Student students[5];

    for(int i = 0; i < 5; i++) {
        printf("Write the ID of student, name and the course\n");
        scanf("%d %s %s", &students[i].registration, students[i].name, students[i].course);

        printf("Information about the student %d\n", i);
        printf("ID: %d\nName: %s\nCourse: %s\n", students[i].registration, students[i].name, students[i].course);
    }

    return 0;
}
