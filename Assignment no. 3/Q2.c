#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   DisplayFactor
//  Input       :   integer
//  Output      :   None
//  Description :   Print only even factors of the given number
//  Author      :   Nikhil
//  Date        :   06/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i=0;

    if((iNo%2)!=0)                  // filter
    {
        return;                     // return to main() function
    }

    if(iNo<=0)                      //updater
    {
        iNo=-iNo;
    }

    for(i=1;i<iNo;i++)
    {
        if (((i%2)==0) && ((iNo%i)==0))
        {
            printf("%d\t",i);
        }
    }
}

//Entry point function : main()

int main()
{
    int iValue=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    DisplayFactor(iValue);           // function call
    getch();                         // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                        // return to operating system
}

