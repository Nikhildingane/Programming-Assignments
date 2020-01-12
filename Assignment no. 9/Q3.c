#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   EvenFactorial
//  Input       :   integer
//  Output      :   integer
//  Description :   Calculate even factorial of given number
//  Author      :   Nikhil
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
        int iFact=1;
        if(iNo<0)
        {
            iNo=-iNo;
        }
        while(iNo>=1)
        {
            if((iNo%2)==0)
            {
                iFact=iFact*iNo;
            }
            iNo--;
        }
        return iFact;
}

//Entry point function : main()
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    iRet=EvenFactorial(iValue);
    printf("Even factorial of number = %d",iRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
