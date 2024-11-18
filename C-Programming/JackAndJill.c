#include <stdio.h>

int main(){

    int MsPkg, cafe, cds, dvds;
    MsPkg = 50000, cafe = 500, cds = 500, dvds = 1000;

    int Pms, Pcafe, Pcds, Pdvds;
    printf("Enter the number of Microsoft packages that you sold today \n");
    scanf("%d", &Pms);
    int Tms;
    Tms = (MsPkg * Pms);
    printf("Your total sales from Ms Packages = %d\n", Tms);
    printf("\n");

    printf("Enter the number of minutes clients used the internet today \n");
    scanf("%d", &Pcafe);
    int Tcafe;
    Tcafe = ((Pcafe / 30) * cafe);
    printf("Your total sales from Internet = %d\n", Tcafe);
    printf("\n");

    printf("Enter the number of CDs that you sold today \n");
    scanf("%d", &Pcds);
    int Tcds;
    Tcds = (cds * Pcds);
    printf("Your total sales from CDs = %d\n", Tcds);
    printf("\n");

    printf("Enter the number of DVDs that you sold today \n");
    scanf("%d", &Pdvds);
    int Tdvds;
    Tdvds = (dvds * Pdvds);
    printf("Your total sales from DVDs = %d\n", Tdvds);
    printf("\n");

    int TotalSales;
    TotalSales = Tms + Tcds + Tcafe + Tdvds;
    printf("\nYou total sales today = %d", TotalSales);
    printf("\n");

    int profit = (TotalSales - 100000);
    printf("\nYour profit = %d", profit);

    return 0;
}