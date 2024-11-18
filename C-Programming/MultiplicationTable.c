#include <stdio.h>

int main(){
    int i, number, Product;
    printf("Please enter any number \n");
    scanf("%d", &number);
     printf("Your multiplication table is : \n");

    for (i = 1; i <= 10; i++) {
       
        Product = number * i;
        printf("%d \n", Product);
    }

    return 0;
}