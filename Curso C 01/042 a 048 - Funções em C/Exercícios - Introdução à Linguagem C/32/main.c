#include <stdio.h>
#include <stdlib.h>

void fraction(int x, int y) {
    int d = 1;

    for(int i = 2; i <= x; i++){
        if(x % i == 0 && y % i == 0){
            d = i;
        }
    }

    x /= d;
    y /= d;

    printf("\n%d\n", x);
    printf("-\n");
    printf("%d\n", y);
}

int main()
{
    int x, y;
    printf("Write a numbers\n");
    scanf("%d %d", &x, &y);

    fraction(x, y);

    return 0;
}
