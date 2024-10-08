#include <stdio.h>

int main(){

    int p, n, x;
    p = 1;

    printf("Enter the value of x \n");
    scanf("%d", &x);

    printf("Enter the value of n \n");
    scanf("%d", &n);

    if(n > 0){
        do{
            p = p * x;
            printf("p = %d \n", p);

    printf("Enter the value of x \n");
    scanf("%d", &x);

    printf("Enter the value of n \n");
    scanf("%d", &n);
            
        } while(n--);



    } else{
        printf("The value of p = %d \n", p);
    }


    return 0;
}