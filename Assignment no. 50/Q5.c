#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Reverse
//  Input       :   integer
//  Output      :   integer
//  Description :   reverse the given number
//  Author      :   Nikhil
//  Date        :   01/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Reverse(int iNo)
{
    static int iRev=0;
    if(iNo!=0)
    {
        iRev=(iRev*10)+(iNo%10);
        Reverse(iNo/10);
    }
    return iRev;
}

//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    printf("\Reverse numbers is :\n%d",Reverse(iValue));
    return 0;                       // return to operating system
}




