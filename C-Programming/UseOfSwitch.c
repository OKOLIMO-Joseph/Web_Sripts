#include<stdio.h>

int main(){

char grade;
printf("Enter your letter grade \n");
scanf("%c", &grade);

switch(grade){

case 'A':
printf("Excellent! Keep it Up \n");
break;

case 'B':
printf("Very good \n");
break;

case 'C':
printf("That is good, but improve \n");
break;

case 'D':
printf("That is fair, Aim higher \n");
break;

case 'F':
printf("You have failed, Pull up your socks!!! \n");
break;

default:
printf("Invalid entry, Please enter the correct letter grade \n");
}

    return 0;
}