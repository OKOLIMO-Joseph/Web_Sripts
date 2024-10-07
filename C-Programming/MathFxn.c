#include <stdio.h>
#include <math.h>

int main(){
    double A = sqrt(4);
    double B = pow(3, 2);  // It is 3^2
    double C = log(3);
    double D = sin(45);
    double E = cos(45);
    double F = tan(45);
    double G = round(3.142);
    double H = ceil(3.142); //Rounds the number to the nearest highest number
    double I = floor(3.142); //Rounds the number to the nearest lowest number

    //Output for each
    printf("%lf\n", A);
    printf("%lf\n", B);
    printf("%lf\n", C);
    printf("%lf\n", D);
    printf("%lf\n", E);
    printf("%lf\n", F);
    printf("%lf\n", G);
    printf("%lf\n", H);
    printf("%lf\n", I);



    return 0;
}