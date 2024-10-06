#include <stdio.h>

int main(){

//An array is a data structure that can store many values of the same data type
double Prices[5] = {5.0, 10.0, 15.0, 34.0, 80.5};

//Changing the value of array elemnts
Prices[0] = 67.0;
Prices[0] = 63.0;

printf("The price is : %lf", Prices[0]);

//Take input and store in the 3rd element
scanf("%d", &Prices[1]);

//Input and store it in ith element
//scanf("%d", &Prices[i-1]);

int x[3][4] = {{1, 3, 5}, {2,6,6,}};
printf("%d \n", x[2][0]);
//int x[][2] = {{2, 5, 6}, {2,5,4}};






//When the above program is run, the output is 5.0000, because the index number defined as Prices[0], thus the index no. of 5.0 is 0
    return 0;
}