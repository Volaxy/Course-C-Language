#include <stdio.h>
#include <stdlib.h>

typedef struct persons {
    int age;
    char name[20], addres[50];
}persons;

int main()
{
    persons person1;

    printf("Write the name of person, age and addres\n");
    scanf("%s %d %s", person1.name, &person1.age, person1.addres);

    return 0;
}
