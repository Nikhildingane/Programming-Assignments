#include<stdio.h>
typedef unsigned int UINT;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   OffBit
//  Input       :   unsigned integer
//  Output      :   unsigned integer
//  Description :   accept one number from user and off 7th bit of that number if it is on
//  Author      :   Nikhil
//  Date        :   18/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT OffBit(UINT iNo)
{
    UINT iResult=0,iMask=0X00000040;
    iResult=iNo&iMask;
    if(iResult==iMask)
    {
        iNo=iNo&(~iMask);
    }
    return iNo;
}

//Entry point function : main()
int main()
{
    UINT iValue=0,iRet=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    iRet=OffBit(iValue);
    printf("%d",iRet);
    return 0;                       // return to operating system
}
