#include <stdio.h>
#include <stdlib.h>

int positive_or_negative(int number){
    if(number > 0){
        return 1;
    }else{
        if(number < 0){
            return -1;
        }else{
            return 0;
        }
    }
}

int main()
{
    int n;

    printf("Write a number\n");
    scanf("%d", &n);

    printf("Response to question: %d", positive_or_negative(n));

    return 0;
}
