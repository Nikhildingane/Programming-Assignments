#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Max
//  Input       :   integer
//  Output      :   integer
//  Description :   return smallest digit of number
//  Author      :   Nikhil
//  Date        :   01/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Min(int iNo)
{
    static int iMin=0;
    static int flag=0;
    if(flag==0)
    {
        iMin=iNo%10;
        flag=1;
    }
    if(iNo!=0)
    {
        if(iMin>(iNo%10))
        {
            iMin=iNo%10;
        }
        Min(iNo/10);
    }
    return iMin;
}

//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    printf("\nMaximum digit is :\n%d",Min(iValue));
    return 0;                       // return to operating system
}



