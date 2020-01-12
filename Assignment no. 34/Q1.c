#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   ChkBit
//  Input       :   unsigned integer,unsigned integer
//  Output      :   boolean
//  Description :   accept one number from user and off n th bit of that number if it is on
//  Author      :   Nikhil
//  Date        :   18/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkBit(UINT iNo,UINT iPose)
{
    UINT iResult=0,iMask=1;
    iMask=iMask<<(iPose-1);
    iResult=iNo&iMask;
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
    UINT iValue=0,iPose=0;
    BOOL bRet=FALSE;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    printf("Enter bit number:\n");
    scanf("%d",&iPose);
    if((iPose>=0)&&(iPose<=32))
    {
        bRet=ChkBit(iValue,iPose);
        if(bRet==TRUE)
        {
            printf("bit is on");
        }
        else
        {
            printf("bit is off");
        }
    }
    else
    {
        printf("Invalid bit number");
    }
    return 0;                       // return to operating system
}
