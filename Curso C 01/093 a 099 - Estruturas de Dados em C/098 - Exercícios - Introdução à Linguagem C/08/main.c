#include <stdio.h>
#include <stdlib.h>

int stack[10], top = 0;

void insertStack() {
    int n;

    printf("\nWrite the value to add in the stack\n");
    scanf("%d", &n);

    if(top > 9) {
        printf("\nFull stack, remove the data last to add more values\n");
    }else{
        stack[top] = n;
        top++;
    }
}

void removeStack() {
    if(top < 0) {
        printf("\nNo data to remove\n");
    }else{
        stack[top] = 0;
        top--;
    }
}

void listStack() {
    printf("\n");
    for(int i = 0; i < 10; i++) {
        printf("[%d]", stack[i]);
    }
    printf("\nTop: %d\n", top);
}

void clearStack() {
    for(int i = 0; i < 10; i++) {
        stack[i] = 0;
    }
}

int main()
{
    int option;

    clearStack();

    do {
        printf("\n\nSelect a option\n");
        printf("1 - Insert data\n2 - Remove data\n3 - List\n4 - Clear the stack\n5 - Exit\n");
        scanf("%d", &option);

        switch(option) {
            case 1:
                insertStack();
                break;
            case 2:
                removeStack();
                break;
            case 3:
                listStack();
                break;
            case 4:
                clearStack();
                break;
            case 5:
                break;
            default:
                printf("\nInvalid option!\n\n");
        }

        listStack();
    }while(option != 5);

    return 0;
}
