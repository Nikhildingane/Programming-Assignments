#include<stdio.h>

typedef unsigned int UINT;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   CountOne
//  Input       :   unsigned integer
//  Output      :   integer
//  Description :   count the number of 1 bits from number
//  Author      :   Nikhil
//  Date        :   22/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountOne(UINT iNo)
{
    int iCnt=0;
    while(iNo>0)
    {
        if((iNo&1)==1)
        {
            iCnt++;
        }
        iNo=iNo>>1;
    }
    return iCnt;
}

//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    printf("Number of 1 bits is :\n%d",CountOne(iValue));
    return 0;                       // return to operating system
}
