#include <stdio.h>
#include <stdlib.h>

void totalSeconds(int h, int m, int s) {
    int total = h * 3600 + m * 60 + s;
    printf("The total seconds at this time is %d", total);
}

int main()
{
    int hours, minutes, seconds;
    printf("Enter the values of hours, minutes and seconds\n");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    totalSeconds(hours, minutes, seconds);

    return 0;
}
