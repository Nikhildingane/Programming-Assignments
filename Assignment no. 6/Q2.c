#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   ChkGreater
//  Input       :   integer
//  Output      :   boolean
//  Description :   check weather number is greater than or less 100
//  Author      :   Nikhil
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    return (iNo>100?TRUE:FALSE);
}

//Entry point function : main()
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Please enter number:\n");
    scanf("%d",&iValue);
    bRet=ChkGreater(iValue);
    (bRet==TRUE?printf("Greater"):printf("Smaller"));
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

