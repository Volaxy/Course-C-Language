#include <stdio.h>
#include <stdlib.h>

void media(float n1, float n2, float n3, char c) {
    if(c == 'a') {
        printf("The arithmetic media if %f", (n1 + n2 + n3) / 3);
    }else{
        printf("The ponderate media if %f", (n1 * 5 + n2 * 3 + n3 * 2) / 3);
    }
}

int main()
{
    float n1, n2, n3;
    char c;

    printf("Write three notes of student and one letter\n");
    scanf("%f %f %f %c", &n1, &n2, &n3, &c);

    media(n1, n2, n3, c);

    return 0;
}
