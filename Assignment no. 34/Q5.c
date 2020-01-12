#include<stdio.h>
typedef unsigned int UINT;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   ToggleBit
//  Input       :   unsigned integer
//  Output      :   unsigned integer
//  Description :   accept one number from user and toggle contents of first and last nibble of the number.
//  Author      :   Nikhil
//  Date        :   18/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT ToggleBit(UINT iNo)
{
    UINT iMask=0xf000000f;
    return (iNo^iMask);
}

//Entry point function : main()
int main()
{
    UINT iValue=0,iRet=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    iRet=ToggleBit(iValue);
    printf("%u",iRet);
    return 0;                       // return to operating system
}


