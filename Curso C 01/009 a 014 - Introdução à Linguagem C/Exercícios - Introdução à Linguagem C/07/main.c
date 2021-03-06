#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f;
    printf("Digite uma temperatura em graus fahrennheit\n");
    scanf("%f", &f);
    printf("A temperatura em celsius e %f", 5 * (f - 32) / 9);

    return 0;
}
