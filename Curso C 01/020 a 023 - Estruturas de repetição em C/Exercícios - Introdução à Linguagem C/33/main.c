#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    printf("Digite 2 numeros\n");
    scanf("%d %d", &i, &j);

    if(i > j){
        for(int a = 0; a <= i; a++){
            if(a % i == 0 || a % j == 0){
                printf("%d\n", a);
            }
        }
    }else{
        for(int a = 0; a <= j; a++){
            if(a % i == 0 || a % j == 0){
                printf("%d\n", a);
            }
        }
    }

    return 0;
}
