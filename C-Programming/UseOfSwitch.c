#include <stdio.h>

int main(){

/* Comments to use
A - excellent, You nailed it!
B - very good, Keep it up!
C - Good, but improve
D - Fair, pull up your socks1
F - You have failed*/

char grade;
grade = 'A', 'B', 'C', 'D', 'F';

printf("Enter your letter grade \n");
scanf("%c", &grade);

switch(grade){

case 'A':{
    printf("Excellent, You nailed it! \n");
    break;
}
case 'B':{
    printf("Very good, Keep it up! \n");
    break;
}
case 'C':{
    printf("Good, but improve \n");
    break;
}
case 'D':{
    printf("Fair, pull up your socks! \n");
    break;
}
case 'F':{
    printf("You have failed \n");
    break;
}
default:{
    printf("Wrong entry, please input a correct letter grade \n");
    break;
}

}
    return 0;
}