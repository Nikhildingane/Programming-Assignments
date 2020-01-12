#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   IncomeTax
//  Input       :   integer
//  Output      :   float
//  Description :   Calculate income tax
//  Author      :   Nikhil
//  Date        :   08/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float IncomeTax(int iAmount)
{
    if(iAmount<=0)
    {
        return 0;
    }
    if(iAmount<500000)
    {
        return 0.0;
    }
    else if((iAmount>=500000) && (iAmount<1000000))
    {
        return ((iAmount-500000)* 0.1);
    }
    else if((iAmount>=1000000) && (iAmount<2000000))
    {
        return (50000+((iAmount-1000000)* 0.2));
    }
    else if(iAmount>=2000000)
    {
        return (50000+200000+((iAmount-2000000)* 0.3));
    }
}
//Entry point function : main()
int main()
{
    int iAmount=0;
    float fRet=0.0;
    printf("Enter gross income :\n");
    scanf("%d",&iAmount);
    fRet=IncomeTax(iAmount);
    printf("Tax amount is :\n%f",fRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
