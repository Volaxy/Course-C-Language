#include <stdio.h>
#include <stdlib.h>

void sum(int n1, int n2) {
    int sum = 0;

    for(int i = n1 + 1; i < n2; i++){
        sum += i;
    }

    printf("The sum is %d", sum);
}

int main()
{
    int n1, n2;
    printf("Write two numbers\n");
    scanf("%d %d", &n1, &n2);

    sum(n1, n2);

    return 0;
}
