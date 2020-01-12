#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Factorial
//  Input       :   integer
//  Output      :   integer
//  Description :   Calculate factorial of given number
//  Author      :   Nikhil
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iFact=1;
    for(;iNo>=1;iNo--)
    {
        iFact=iFact*iNo;
    }
    return iFact;
}
//Entry point function : main()
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    iRet=Factorial(iValue);
    printf("Factorial is %d",iRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

