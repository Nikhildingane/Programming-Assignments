#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   FhtoCs
//  Input       :   float
//  Output      :   double
//  Description :   Convert temperature fahrenheit into celcius
//  Author      :   Nikhil
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    return ((fTemp-32)*0.555555556);
}
//Entry point function : main()
int main()
{
    float fValue=0.0;
    double dRet=0.0;
    printf("Enter temperature in Fahrenheit:\n");
    scanf("%f",&fValue);
    dRet=FhtoCs(fValue);
    printf("%lf",dRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
