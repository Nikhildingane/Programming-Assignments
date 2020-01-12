#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   PrintEven
//  Input       :   integer
//  Output      :   None
//  Description :   Print first n even numbers
//  Author      :   Nikhil
//  Date        :   06/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt=0;
    int iEvenNumber=2;

    if(iNo<=0)                      // filter
    {
        return;                     // return to main() function
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iEvenNumber);
        iEvenNumber+=2;
    }
}

//Entry point function : main()

int main()
{
    int iValue=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    PrintEven(iValue);              // function call
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
