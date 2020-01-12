
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   MultDigits
//  Input       :   integer
//  Output      :   integer
//  Description :   return multiplication of all digits of number
//  Author      :   Nikhil
//  Date        :   19/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iMult=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        if((iNo%10)!=0)
        {
            iMult=iMult*(iNo%10);
        }
        iNo=iNo/10;
    }
    return iMult;
}

//Entry point function : main()

int main()
{
    int iValue=0,iRet=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    iRet=MultDigits(iValue);
    printf("%d",iRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}



