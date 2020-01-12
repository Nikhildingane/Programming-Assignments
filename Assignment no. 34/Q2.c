#include<stdio.h>
typedef unsigned int UINT;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   OffBit
//  Input       :   unsigned integer
//  Output      :   unsigned integer
//  Description :   accept one number from user and off n th bit of that number if it is on
//  Author      :   Nikhil
//  Date        :   18/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT OffBit(UINT iNo,UINT iPose)
{
    UINT iMask=1;
    iMask=iMask<<(iPose-1);
    iNo=iNo&(~iMask);
    return iNo;
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
        iRet=OffBit(iValue,iPose);
        printf("%d",iRet);
    }
    else
    {
        printf("Invalid bit number");
    }
    return 0;                       // return to operating system
}

