#include <stdio.h>

int main(){
    int grades[100];
    int numGrades = 0;
    char choice;

    do {
        printf("MENU \n");
        printf("a. Enter your grade \n");
        printf("b. Calculate the average \n ");
        printf("c. Exit...!!! \n");
        printf("Please select one: \n");
        scanf("%c", &choice);

        switch(choice){
            case 'a':
            if (numGrades == 100) {
                printf("Maximum number of grades has been reached \n");
            } else{
                printf("Enter a grade between 0 and 100 \n");
                scanf("%d", &grades[numGrades]);
                printf("Grade added successfully \n");
                numGrades++;
            }
            break;
            case 'b':
            if (numGrades == 0) {
                printf("No grades entered yet \n");
            } else {
                int sum = 0;
                for (int i = 0; i < numGrades; i++) {
                    sum += grades[i];
                }
                float average = (float) sum / numGrades;
                printf("Average grade : %f\n", average);
            }
            break;
            
            case 'c':
            printf("Exiting program... \n");
            break;
            default:
            printf("Invalid choice. Please try again \n");
        }

        printf(" \n");

    } while (choice != 'c');

    return 0;

}