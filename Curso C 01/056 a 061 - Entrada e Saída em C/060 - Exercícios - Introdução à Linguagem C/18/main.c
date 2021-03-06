#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("arq.txt", "r");
    int price, reais = 0;
    char book[20];

    while(1) {
        fscanf(file, "%s", &book);
        fscanf(file, "%d", &price);

        reais += price;

        if(feof(file)) {
            break;
        }
    }

    printf("The total price is %d", reais);

    fclose(file);

    return 0;
}
