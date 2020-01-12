#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Mult
//  Input       :   integer
//  Output      :   integer
//  Description :   calculate the product of digits
//  Author      :   Nikhil
//  Date        :   01/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Mult(int iNo)
{
    static int iMult=1;
    if(iNo!=0)
    {
        iMult=iMult*(iNo%10);
        Mult(iNo/10);
    }
    return iMult;
}

//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    printf("Product of digits is :\n%d",Mult(iValue));
    return 0;                       // return to operating system
}


