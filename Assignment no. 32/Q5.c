#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   ChkBit
//  Input       :   unsigned integer
//  Output      :   boolean
//  Description :   check weather first(1st) and last(32th) bit is on or off
//  Author      :   Nikhil
//  Date        :   18/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UINT iNo)
{
    UINT iResult=0,iMask=0X80000001;
    iResult = iNo&iMask;
    if(iResult==iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//Entry point function : main()
int main()
{
    UINT iValue=0;
    BOOL bRet=FALSE;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    bRet=ChkBit(iValue);
    if(bRet==TRUE)
    {
        printf("bit is on");
    }
    else
    {
        printf("bit is off");
    }
    return 0;                       // return to operating system
}


