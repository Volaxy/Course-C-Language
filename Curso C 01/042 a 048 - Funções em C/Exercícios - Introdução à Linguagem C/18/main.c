#include <stdio.h>
#include <stdlib.h>

void exponential(int x, int z) {
    int result = 1;

    for(int i = 1; i <= z; i++){
        result *= x;
    }

    printf("The results is %d", result);
}

int main()
{
    int x, z;
    printf("Write two numbers\n");
    scanf("%d %d", &x, &z);

    exponential(x, z);

    return 0;
}
