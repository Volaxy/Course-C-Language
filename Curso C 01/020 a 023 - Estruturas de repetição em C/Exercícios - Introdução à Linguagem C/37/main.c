#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, c, d, u, n1, n2, soma;

    for(int i = 1000; i < 10000; i++){
        m = i / 1000;
        c = (i - m * 1000) / 100;
        d = (i - (m * 1000) - (c * 100)) / 10;
        u = i - (m * 1000) - (c * 100) - (d * 10);

        n1 = m * 10 + c;
        n2 = d * 10 + u;

        soma = n1 + n2;

        if(soma * soma == i){
            printf("%d\n", i);
        }
    }

    return 0;
}
