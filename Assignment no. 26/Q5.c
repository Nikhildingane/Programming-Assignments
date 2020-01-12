#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Display
//  Input       :   character
//  Output      :   none
//  Description :   print decimal,octal and hexadecimal value of character
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal : %d\n",ch);
    printf("Octal : %o\n",ch);
    printf("Hexadecimal : %x\n",ch);
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


