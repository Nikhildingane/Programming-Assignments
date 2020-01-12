#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Factorial
//  Input       :   integer
//  Output      :   none
//  Description :   calculate factorial of number
//  Author      :   Nikhil
//  Date        :   05/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    static int iFact=1;
    if(iNo>=1)
    {
        iFact=iFact*iNo;
        Factorial(--iNo);
    }
    return iFact;
}

//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    printf("Factorial of %d is %d",iValue,Factorial(iValue));
    return 0;                       // return to operating system
}





