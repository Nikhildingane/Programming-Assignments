#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Max
//  Input       :   integer
//  Output      :   integer
//  Description :   return largest digit of number
//  Author      :   Nikhil
//  Date        :   01/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Max(int iNo)
{
    static int iMax=0;
    static int flag=0;
    if(flag==0)
    {
        iMax=iNo%10;
        flag=1;
    }
    if(iNo!=0)
    {
        if(iMax<(iNo%10))
        {
            iMax=iNo%10;
        }
        Max(iNo/10);
    }
    return iMax;
}

//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    printf("\nMaximum digit is :\n%d",Max(iValue));
    return 0;                       // return to operating system
}



