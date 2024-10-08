#include<stdio.h>

int main(){
int electricity;
int water;
int feeding;
int transport;
int MonthlyExpenditure;
//int MonthlySalary = 900000;

printf("Patrick, please feed in your monthly expenses! \n");

//Expense on electricity
printf("Electricity: \n");
scanf("%d",&electricity);

//Expense on water
printf("Water: \n");
scanf("%d",&water);

//Expense on feeding
printf("Feeding: \n");
scanf("%d",&feeding);

//Expense on transport.
printf("Transport: \n");
scanf("%d",&transport);

MonthlyExpenditure = electricity + water + feeding + transport;
printf("Patrick, Your monthly expenditure is : %d\n", MonthlyExpenditure);

//Checking if the amount is sufficient
int MonthlySalary = 900000;

if(MonthlyExpenditure <= MonthlySalary){
    printf("Your salary is enough to cater for your expenses \n");
} else{
    printf("Your salary is not enough to cater for your expenses \n");
}

    return 0;
}             