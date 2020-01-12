#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   DollarToINR
//  Input       :   integer
//  Output      :   integer
//  Description :   convert dollars into INR
//  Author      :   Nikhil
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iCnt=0;
    if(iNo<-0)
    {
       return 0;
    }
    return (iNo*70);
}
//Entry point function : main()
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    iRet=DollarToINR(iValue);
    printf("Value in INR = %d",iRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
