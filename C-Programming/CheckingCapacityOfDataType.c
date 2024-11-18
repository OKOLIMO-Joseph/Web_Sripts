#include <stdio.h>
//#include <limits.h>
#include <float.h>

int main(){

    //For chars
    //printf("The storage size of char is: %c\n", sizeof(char));

    //For ints
    //printf("The storage size of int is: %d\n", sizeof(int));

    //For unsigned ints
    //printf("The storage size of unsigned int is: %d\n", sizeof(unsigned int));

    //For floats
    printf("The storage size of float is: %d\n", sizeof(float));

    //For unsigned floats
    //printf("The storage size of int is: %f\n", sizeof(unsigned float));

    //For doubles
    printf("The storage size of double is: %d\n", sizeof(double));

    //For long doubles
    printf("The storage size of long double is: %d\n", sizeof(long double));

    //Checking capacity of a float
    printf("The maximum float positive number is: %d\n", FLT_MAX);

    printf("The minimum float positive number is: %d\n", FLT_MIN);

    printf("The precision of a float is: %d\n", FLT_DIG);

    return 0;
}