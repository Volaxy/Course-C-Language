#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n100, n50, n20, n10, n5, n2, n1;
    float saque;

    printf("Qual o seu saque\n");
    scanf("%f", &saque);

    n100 = saque / 100;
    n50 = (saque - n100 * 100) / 50;
    n20 = (saque - n100 * 100 - n50 * 50) / 20;
    n10 = (saque - n100 * 100 - n50 * 50 - n20 * 20) / 10;
    n5 = (saque - n100 * 100 - n50 * 50 - n20 * 20 - n10 * 10) / 5;
    n2 = (saque - n100 * 100 - n50 * 50 - n20 * 20 - n10 * 10 - n5 * 5) / 2;
    n1 = saque - n100 * 100 - n50 * 50 - n20 * 20 - n10 * 10 - n5 * 5 - n2 * 2;

    printf("Total de notas:\n");
    printf("100: %d\n", n100);
    printf("50: %d\n", n50);
    printf("20: %d\n", n20);
    printf("10: %d\n", n10);
    printf("5: %d\n", n5);
    printf("2: %d\n", n2);
    printf("1: %d\n", n1);

    return 0;
}
