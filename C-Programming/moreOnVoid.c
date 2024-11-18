#include <stdio.h>

void birthday(char name[], int age){
    printf("Hello %s, happy birthday to you \n", name);
    printf("You are %d years old!!! \n", age);
}
int main(){
    char name[] = "Okolimo";
    int age = 20;

    birthday(name, age);

    return 0;
}