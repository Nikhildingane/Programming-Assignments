#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Sum
//  Input       :   integer
//  Output      :   integer
//  Description :   calculate the sum of digits
//  Author      :   Nikhil
//  Date        :   01/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Sum(int iNo)
{
    static int sum=0;
    if(iNo!=0)
    {
        sum=sum+(iNo%10);
        Sum(iNo/10);
    }
    return sum;
}

//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    printf("Sum of digits is :\n%d",Sum(iValue));
    return 0;                       // return to operating system
}

