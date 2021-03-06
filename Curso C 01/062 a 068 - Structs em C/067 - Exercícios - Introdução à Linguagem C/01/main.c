#include <stdio.h>
#include <stdlib.h>

typedef struct times {
    int hour, minute, second;
}times;

typedef struct dates {
    int day, month, year;
}dates;

typedef struct commitment {
    times time;
    dates date;
    char text[150];
}commitment;

int main()
{
    return 0;
}
