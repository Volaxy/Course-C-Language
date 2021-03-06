#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arq = fopen("arq.txt", "w+");
    int products;

    printf("Enter the number of products\n");
    scanf("%d", &products);

    int numcode[products], quantity[products];
    char description[products][20];

    for(int i = 0; i < products; i++) {
        printf("Write the number code, name of product and the quantity of this product available\n");
        scanf("%d %s %d", &numcode[i], description[i], &quantity[i]);
        fprintf(arq, "%d %s %d %c", numcode[i], description[i], quantity[i], '\n');
        printf("\nProduct Added!\n\n");
    }

    int option, codeproduct, quantityproduct;
    char product[20], nameproduct[20];

    do {
        printf("\nMENU\n==================================\n1 - Entry for products\n2 - Products output\n3 - Full report\n4 - Products not available\n5 - For exit\n======================================\n");
        scanf("%d", &option);

        rewind(arq);

        switch(option) {
            case 1:
                printf("\nWrite the name of the product that will have the stock added\n");
                scanf("%s", product);

                FILE *temp = fopen("temp.txt", "w");

                while(1) {
                    fscanf(arq, "%d", &codeproduct);
                    fscanf(arq, "%s", nameproduct);
                    fscanf(arq, "%d", &quantityproduct);

                    if(feof(arq)) {
                        break;
                    }

                    //Open temp file to register the data of original file
                    fprintf(temp, "%d %s ", codeproduct, nameproduct);

                    //When found, write the quantity of the product and continue writing in the file temp
                    if(strcmp(nameproduct, product) == 0) {
                        int newquantity;
                        printf("Enter the quantity to be added\n");
                        scanf("%d", &newquantity);

                        fprintf(temp, "%d", (quantityproduct + newquantity));
                    }else{
                        fprintf(temp, "%d", quantityproduct);
                    }

                    fputc('\n', temp);
                }

                fclose(temp);

                //Written the data in the temp file, delete the original file and rename the temp file for "arq.txt"
                fclose(arq);
                remove("arq.txt");

                rename("temp.txt", "arq.txt");

                arq = fopen("arq.txt", "r");

                break;
            case 2:
                printf("\nWrite the name of the product that will have the stock remove\n");
                scanf("%s", product);

                temp = fopen("temp.txt", "w");

                while(1) {
                    fscanf(arq, "%d", &codeproduct);
                    fscanf(arq, "%s", nameproduct);
                    fscanf(arq, "%d", &quantityproduct);

                    if(feof(arq)) {
                        break;
                    }

                    //Open temp file to register the data of original file
                    fprintf(temp, "%d %s ", codeproduct, nameproduct);

                    //When found, write the quantity of the product and continue writing in the file temp
                    if(strcmp(nameproduct, product) == 0) {
                        int newquantity;
                        printf("Enter the quantity to be remove\n");
                        scanf("%d", &newquantity);

                        fprintf(temp, "%d", (quantityproduct - newquantity));
                    }else{
                        fprintf(temp, "%d", quantityproduct);
                    }

                    fputc('\n', temp);
                }

                fclose(temp);

                //Written the data in the temp file, delete the original file and rename the temp file for "arq.txt"
                fclose(arq);
                remove("arq.txt");

                rename("temp.txt", "arq.txt");

                arq = fopen("arq.txt", "r");

                break;
            case 3:
                printf("Products Reporting\n==========================================\n");

                while(fscanf(arq, "%d %s %d", &codeproduct, nameproduct, &quantityproduct) != EOF) {
                    printf("%ID: %d | Name: %s | Quantity: %d\n", codeproduct, nameproduct, quantityproduct);
                }

                break;
            case 4:
                printf("Products not available\n");

                while(fscanf(arq, "%d %s %d", &codeproduct, nameproduct, &quantityproduct) != EOF) {
                    if(quantityproduct == 0) {
                        printf("%ID: %d | Name: %s | Quantity: %d\n", codeproduct, nameproduct, quantityproduct);
                    }
                }

                break;
        }
    }while(option != 5);

    fclose(arq);

    return 0;
}
