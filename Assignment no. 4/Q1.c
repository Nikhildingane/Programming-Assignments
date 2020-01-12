#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   CalculateBill
//  Input       :   integer
//  Output      :   float
//  Description :   Calculate bill with discount
//  Author      :   Nikhil
//  Date        :   08/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float CalculateBill(int iAmount)
{
    if(iAmount<=0)
    {
        return 0;
    }
    if(iAmount<=500)
    {
        return iAmount;
    }
    else if((iAmount>500) && (iAmount<=1500))
    {
        return (iAmount - (iAmount * 0.1));
    }
    else if(iAmount>1500)
    {
        return (iAmount - (iAmount * 0.15));
    }
}
//Entry point function : main()
int main()
{
    int iAmount=0;
    float fRet=0.0;
    printf("Enter amount :\n");
    scanf("%d",&iAmount);
    fRet=CalculateBill(iAmount);
    printf("Bill amount is :\n%f",fRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
