#include<stdio.h>
typedef unsigned int UINT;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   OnBit
//  Input       :   unsigned integer,unsigned integer
//  Output      :   unsigned integer
//  Description :   accept one number and position from user and on that bit.
//  Author      :   Nikhil
//  Date        :   18/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT OnBit(UINT iNo,UINT iPose)
{
    UINT iMask=1;
    iMask=iMask<<(iPose-1);
    return (iNo|iMask);
}

//Entry point function : main()
int main()
{
    UINT iValue=0,iRet=0,iPose=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    printf("Enter bit number:\n");
    scanf("%d",&iPose);
    if((iPose>=0)&&(iPose<=32))
    {
        iRet=OnBit(iValue,iPose);
        printf("%d",iRet);
    }
    else
    {
        printf("Invalid bit number");
    }
    return 0;                       // return to operating system
}


