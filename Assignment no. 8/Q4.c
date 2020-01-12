#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Table
//  Input       :   integer
//  Output      :   None
//  Description :   print given numbers table
//  Author      :   Nikhil
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=10;iCnt++)
    {
        printf("%d\t",(iNo*iCnt));
    }
}
//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    Table(iValue);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
