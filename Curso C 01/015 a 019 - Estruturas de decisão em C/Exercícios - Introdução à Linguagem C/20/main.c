#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Digite 3 lados de um triangulo\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b + c || b > a + c || c > a + b){
        printf("Triangulo nao pode ser formado");
    }else{
        if(a == b && b == c){
            printf("Equilatero");
        }else{
            if(a == b || b == c || a == c){
                printf("Isosceles");
            }else{
                printf("Escaleno");
            }
        }
    }

    return 0;
}
