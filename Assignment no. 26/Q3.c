#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Display
//  Input       :   character
//  Output      :   none
//  Description :   print character pattern
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    char c='\0';
    if((ch>='A') && (ch<='Z'))
    {
        for(c=ch;c<='Z';c++)
        {
            printf("%c\t",c);
        }
    }
    else if((ch>='a') && (ch<='z'))
    {
        for(c=ch;c>='a';c--)
        {
            printf("%c\t",c);
        }
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
    Display(cValue);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                     // return to operating system
}

