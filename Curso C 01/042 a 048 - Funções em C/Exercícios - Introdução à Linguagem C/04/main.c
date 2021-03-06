#include <stdio.h>
#include <stdlib.h>

void perfect_square(int number){
    int bo = 0;
    for(int i = 1; i <= number; i++){
        if(i * i == number){
            bo = 1;
        }
    }

    if(bo == 1){
        printf("This is are perfect square\n");
    }else{
        printf("That's not a perfect square\n");
    }
}

int main()
{
    int n;

    printf("Write a number\n");
    scanf("%d", &n);

    perfect_square(n);

    return 0;
}
