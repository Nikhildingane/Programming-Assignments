#include<stdio.h>

typedef unsigned int UINT;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   CommonBits
//  Input       :   unsigned integer,unsigned integer
//  Output      :   none
//  Description :   count the number of common bits of two numbers
//  Author      :   Nikhil
//  Date        :   22/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CommonBits(UINT iNo1,UINT iNo2)
{
    int iCnt=1;
    UINT iResult=iNo1&iNo2;
    while(iResult>0)
    {
        if((iResult&1)==1)
        {
            printf("%d\t",iCnt);
        }
        iCnt++;
        iResult=iResult>>1;
    }
}

//Entry point function : main()
int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter two number:\n");
    scanf("%d%d",&iValue1,&iValue2);
    CommonBits(iValue1,iValue2);
    return 0;                       // return to operating system
}

