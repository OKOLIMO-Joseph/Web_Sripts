#include <stdio.h>

int main(){
    int grades, sum;
    int numGrades;
    float average;
    char choice;

    
        printf("MENU \n");
        printf("a. Enter a grade \n");
        printf("b. Calculate average \n");
        printf("c. Exit \n");

        printf("Please enter your choice \n");
        scanf("%c", &choice);

        do {
       

        switch(choice){
            case 'a':
            printf("Enter the maximum number of grades you are going to enter \n");
            scanf("%d", &numGrades);
            do{
        printf("Please enter your marks \n");
        scanf("%d", &grades);
        sum += grades;

        }
        while(0<grades<100);
        break;
        }
        switch(choice) {

        case 'b':
       // do{
        printf("Calculating the average.... \n");
        average = (sum / numGrades);
        printf("The average marks are : %d\n", average);

        } while (sum / numGrades);

        }
       // sum ++;
     while(choice != 'c');

   

    return 0;
}