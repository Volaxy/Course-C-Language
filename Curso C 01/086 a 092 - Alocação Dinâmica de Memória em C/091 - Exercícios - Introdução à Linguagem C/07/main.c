#include <stdio.h>
#include <stdlib.h>

int main()
{
    int drawn[6], bet[6], *p, correct[6], n = 0;

    for(int i = 0; i < 6; i++) {
        drawn[i] = rand() % 20;

        printf("Write the luck number\n");
        scanf("%d", &bet[i]);
    }

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            if(bet[i] == drawn[j]) {
                correct[n] = bet[i];
                n++;
            }
        }
    }

    p = (int*) malloc(n * sizeof(int));

    printf("You hit %d numbers!\n", n);
    for(int i = 0; i < n; i++) {
        p[i] = correct[i];

        printf("%d ", p[i]);
    }

    free(p);
    p = NULL;

    return 0;
}
