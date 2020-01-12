#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Pattern
//  Input       :   integer
//  Output      :   none
//  Description :   display #,number and * for giver number of times
//  Author      :   Nikhil
//  Date        :   24/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void pattern(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
    }
}

//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    pattern(iValue);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}




