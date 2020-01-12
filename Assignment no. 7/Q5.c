#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   MultipleDisplay
//  Input       :   integer
//  Output      :   None
//  Description :   Print multiples of given number up to 5 times
//  Author      :   Nikhil
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("%d\t",(iCnt*iNo));
    }
}

//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
