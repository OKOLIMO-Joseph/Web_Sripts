#include <stdio.h>

int main(){

    int age;
    printf("Please enter your age \n");
    scanf("%d", &age);

    for(age = 1; age < 18; age++) {
        printf("Please you are eligible for voting \n");
     //   scanf("%d", &age);
    } 

    return 0;
}