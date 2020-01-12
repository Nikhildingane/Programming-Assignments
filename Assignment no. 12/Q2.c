
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   ChkZero
//  Input       :   integer
//  Output      :   boolean
//  Description :   check weather the digit is zero or not
//  Author      :   Nikhil
//  Date        :   19/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    BOOL bFlag=FALSE;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        if((iNo%10)==0)
        {
            bFlag=TRUE;
            break;
        }
        iNo=iNo/10;
    }
    return bFlag;
}

//Entry point function : main()

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    bRet=ChkZero(iValue);
    if((bRet==TRUE))
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

