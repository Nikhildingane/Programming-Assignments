#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   DisplayConvert
//  Input       :   character
//  Output      :   None
//  Description :   Convert alphabets from capital to small or vice versa
//  Author      :   Nikhil
//  Date        :   06/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if(((int)cValue>=65) && ((int)cValue<=90))
    {
        printf("%c",(int)cValue+32);
    }
    else if(((int)cValue>=97) && ((int)cValue<=122))
    {
        printf("%c",(int)cValue-32);
    }
    else
    {
        printf("Invalid character");
    }
}

//Entry point function : main()

int main()
{
    char cValue='\0';
    printf("Enter character:\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);         // function call
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

