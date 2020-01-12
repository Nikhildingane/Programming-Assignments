#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   SquareMeter
//  Input       :   int
//  Output      :   double
//  Description :   convert square feet into square meter
//  Author      :   Nikhil
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    if(iValue<0)
    {
        return 0;
    }
    return (iValue*0.0929);
}

//Entry point function : main()
int main()
{
    int iValue=0;
    double dRet=0.0;
    printf("Enter area in square feet:\n");
    scanf("%d",&iValue);
    dRet=SquareMeter(iValue);
    printf("%d Square Feet = %lf Square Meters",iValue,dRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
