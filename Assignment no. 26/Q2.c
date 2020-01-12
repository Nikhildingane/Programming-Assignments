#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Display
//  Input       :   character
//  Output      :   none
//  Description :   print small character if it is capital case and vice versa or remains as it is
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if((ch>='A') && (ch<='Z'))
    {
        printf("%c",ch+32);
    }
    else if((ch>='a') && (ch<='z'))
    {
        printf("%c",ch-32);
    }
    else
    {
        printf("%c",ch);
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
    return 0;                       // return to operating system
}

