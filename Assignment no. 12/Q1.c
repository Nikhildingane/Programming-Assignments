
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   DisplayDigit
//  Input       :   integer
//  Output      :   none
//  Description :   display digits of number in reverse order
//  Author      :   Nikhil
//  Date        :   19/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        printf("%d",iDigit);
        iNo=iNo/10;
    }
}

//Entry point function : main()

int main()
{
    int iValue=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    DisplayDigit(iValue);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
