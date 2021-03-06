#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4;
    printf("Digite 4 notas\n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    printf("A media das notas e igual a %f", (n1 + n2 + n3 + n4) / 4);

    return 0;
}
