#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[100], n = 0;

    for(int i = 0; i < 100; i++){
        int c = n / 100;
        int d = (n - c * 100) / 10;
        int u = n - c * 100 - d * 10;

        if(n % 7 != 0 && u != 7){
            numeros[i] = n;
        }else{
            i--;
        }

        n++;
    }

    for(int i = 0; i < 100; i++){
        printf("%d\n", numeros[i]);
    }

    return 0;
}
