#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 1;
    float reais[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            reais[i][j] = c;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\n", &reais[i][j]);
        }
    }

    return 0;
}
