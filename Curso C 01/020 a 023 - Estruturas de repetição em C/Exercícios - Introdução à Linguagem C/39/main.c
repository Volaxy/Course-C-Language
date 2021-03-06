#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b, h;
    float area;

    printf("Digite a base e a altura\n");
    scanf("%d %d", &b, &h);

    if(b < 0 || h < 0){
        printf("Dados invalidos\n");
    }else{
        area = b * h / 2;
        printf("A area e %f", area);
    }

    return 0;
}
