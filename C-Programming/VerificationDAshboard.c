#include <stdio.h>

int main(){
    int option;

    printf("Hello our dear subscriber, your welcome to Agro-Pal!!! \n");
    printf("Initialization Step \n");
    printf("1. Register \n");
    printf("2. Login \n");
    printf("Please choose one option \n");
    scanf("%d", &option);

    char name, residence, emailAddress;
    int password[4];
    // Registering
    printf("Registering in progress.... \n");
    printf("Please enter your name \n");
    scanf("%c", &name);
    printf("Please enter your residence \n");
    scanf("%c", &residence);
    printf("Enter your email address \n");
    scanf("%c", &emailAddress);
    printf("Create your password \n");
    scanf("%d", &password);


    return 0;
}