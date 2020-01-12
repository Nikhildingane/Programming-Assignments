#include<stdio.h>
typedef unsigned int UINT;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   OffBit
//  Input       :   unsigned integer
//  Output      :   unsigned integer
//  Description :   accept one number from user and off 7th and 10th bit of that number.
//  Author      :   Nikhil
//  Date        :   18/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT OffBit(UINT iNo)
{
    return (iNo&0xfffffdbf);
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

