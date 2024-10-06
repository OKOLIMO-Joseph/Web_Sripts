#include <stdio.h>

int main(){
const double Pi = 3.14159;
double radius, circumference, area;

printf("Enter the radius of the circle\n");
scanf("%lf", &radius);

circumference = 2 * Pi * radius;
area = Pi * radius * radius;

printf("The circumference of the circle is %lf units \n", circumference);
printf("The area of the circle is %lf square units\n", area);
    return 0;
}