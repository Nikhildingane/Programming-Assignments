#include<stdio.h>
typedef unsigned int UINT;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   OffBit
//  Input       :   unsigned integer
//  Output      :   unsigned integer
//  Description :   accept one number from user and on its first 4 bits.
//  Author      :   Nikhil
//  Date        :   18/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT OffBit(UINT iNo)
{
    return (iNo|0x0000000f);
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

