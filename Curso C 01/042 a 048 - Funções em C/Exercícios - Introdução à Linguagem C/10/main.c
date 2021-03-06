#include <stdio.h>
#include <stdlib.h>

void greater(int x, int y) {
    int greater;

    if(x > y){
        greater = x;
    }else{
        greater = y;
    }

    printf("The greater value of x and y is %d", greater);
}

int main()
{
    int x, y;
    printf("Write two numbers\n");
    scanf("%d %d", &x, &y);

    greater(x, y);

    return 0;
}
