#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total;

    printf("Write the number of contacts to be add\n");
    scanf("%d", &total);

    int telephone[total], day[total], month[total];
    char name[total][20];

    for(int i = 0; i < total; i++) {
        printf("Write the name, telephone and the date of birthday\n");
        scanf("%s %d %d %d", name[i], &telephone[i], &day[i], &month[i]);
    }

    FILE *file = fopen("arq.txt", "w+");

    for(int i = 0; i < total; i++) {
        fprintf(file, "%s %d %d %d %c", name[i], telephone[i], day[i], month[i], '\n');
    }

    int option;

    do {
        printf("Select the option:\n=====================================\n1 - Insert contact\n2 - Remove contact\n3 - Find contact by name\n4 - Show list of contacts\n5 - List the contacts whose name begin with a letter\n6 - Show birthday of the month\n7 - For exit\n=======================================\n");
        scanf("%d", &option);

        switch(option) {
            case 1:
                //Discontinued because this is very boring :(

                break;
        }
    }while(option != 7);

    fclose(file);

    return 0;
}
