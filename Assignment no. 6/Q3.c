#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   ChkEqual
//  Input       :   integer, integer
//  Output      :   boolean
//  Description :   Display string
//  Author      :   Nikhil
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1,int iNo2)
{
    return (iNo1==iNo2?TRUE:FALSE);
}

//Entry point function : main()

int main()
{
    int iValue1=0,iValue2=0;
    BOOL bRet=FALSE;
    printf("Please enter two numbers:\n");
    scanf("%d%d",&iValue1,&iValue2);
    bRet=ChkEqual(iValue1,iValue2);
    (bRet==TRUE?printf("Equal"):printf("Not Equal"));
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

