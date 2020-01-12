#include<stdio.h>
typedef unsigned int UINT;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   ToggleBit
//  Input       :   unsigned integer
//  Output      :   unsigned integer
//  Description :   accept one number from user and toggle 7th bit of that number.
//  Author      :   Nikhil
//  Date        :   18/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT ToggleBit(UINT iNo)
{
    UINT iMask=0X00000040;
    iNo=iNo^iMask;
    return iNo;
}

//Entry point function : main()
int main()
{
    UINT iValue=0,iRet=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    iRet=ToggleBit(iValue);
    printf("%d",iRet);
    return 0;                       // return to operating system
}

