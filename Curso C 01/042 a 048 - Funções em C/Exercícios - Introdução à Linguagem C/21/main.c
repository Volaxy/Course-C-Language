#include <stdio.h>
#include <stdlib.h>

void primos(int n) {
    int c = 0, itsprimo = 1;

    for(int i = 2; i < n; i++){
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                itsprimo = 0;
            }
        }

        if(itsprimo == 0){
            itsprimo = 1;
        }else{
            c++;
        }
    }

    printf("The number of primos is %d", c);
}

int main()
{
    int n;

    printf("Write a number\n");
    scanf("%d", &n);

    primos(n);

    return 0;
}
