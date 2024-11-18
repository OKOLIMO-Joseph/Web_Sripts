#include <stdio.h>

int main(){
int age, sum;

//Body of the code
do {
    printf("Please enter your ages \n");
    scanf("%d", &age);
    sum += age;
} while (age != 0);
printf("The sum of your ages is : %d\n", sum);

/*int main(){

    int age = 1;

    printf("Please enter your age \n");
    scanf("%d", &age);

    while (age < 18) {
    age++;
    printf("You are not eligible to view this content! \n"); } */
    return 0; 
}