#include <stdio.h>

int main(){
  //  int age; // Declaration
 //   age = 20; // Initialisation

    //ARRAYS
   // int age[3] = {20, 21, 22};

    //Loops
 /*   int a;
    for(a = 1; a <= 5; a++){
        printf("I live programming \n");
    }
*/
    //CONDITIONAL STATEMENTS
/*   int age;
    printf("Enter your age \n");
    scanf("%d", &age); 

    if(age < 18){
        printf("You are not eligible to vote \n");
    } else{
        printf("You can vote \n");
    }
*/
    //DIRECTIVe
    char grade;
    printf("Please enter your grade (A - F) \n");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
        printf("This is Excellent \n");
        break;
        case 'B':
        printf("This a very good \n");
        break;
        case 'C':
        printf("Good Performance \n");
        break;
        case 'D':
        printf("Fair Performance \n");
        break;
        case 'F':
        printf("You have failed \n");
        break;
    
        default:
        printf("You entered an invalid grade \n");
    }


    return 0;
}