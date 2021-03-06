#include <stdio.h>
#include <stdlib.h>

void date_in_full(int day, int month, int year){
    switch(month){
        case 1:
            printf("Date in full: January %d, %d\n", day, year);
            break;
        case 2:
            printf("Date in full: February %d, %d\n", day, year);
            break;
        case 3:
            printf("Date in full: March %d, %d\n", day, year);
            break;
        case 4:
            printf("Date in full: April %d, %d\n", day, year);
            break;
        case 5:
            printf("Date in full: May %d, %d\n", day, year);
            break;
        case 6:
            printf("Date in full: June %d, %d\n", day, year);
            break;
        case 7:
            printf("Date in full: July %d, %d\n", day, year);
            break;
        case 8:
            printf("Date in full: August %d, %d\n", day, year);
            break;
        case 9:
            printf("Date in full: September %d, %d\n", day, year);
            break;
        case 10:
            printf("Date in full: October %d, %d\n", day, year);
            break;
        case 11:
            printf("Date in full: November %d, %d\n", day, year);
            break;
        case 12:
            printf("Date in full: December %d, %d\n", day, year);
            break;
    }
}

int main()
{
    int day, month, year;
    printf("Enter the day, month and year\n");
    scanf("%d %d %d", &day, &month, &year);

    date_in_full(day, month, year);

    return 0;
}
