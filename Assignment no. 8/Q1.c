#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Number
//  Input       :   integer
//  Output      :   None
//  Description :   Check number is less than 50 or between 50 to 100 or greater than 100
//  Author      :   Nikhil
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("Small");
    }
    else if(iNo>=50|| iNo<=100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    Number(iValue);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
