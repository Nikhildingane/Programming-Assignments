#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   ChkBit
//  Input       :   unsigned integer
//  Output      :   boolean
//  Description :   check weather 9th or 12 th bit is on or off
//  Author      :   Nikhil
//  Date        :   22/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UINT iNo)
{
    UINT iMask=1;
    if(((iNo&(iMask<<8))==(iMask<<8)) || ((iNo&(iMask<<11))==(iMask<<11)))
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
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    if(ChkBit(iValue)==TRUE)
    {
        printf("Bit is on");
    }
    else
    {
        printf("Bit is off");
    }
    return 0;                       // return to operating system
}
