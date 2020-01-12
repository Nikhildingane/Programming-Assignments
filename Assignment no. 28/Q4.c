#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   DisplayDigit
//  Input       :   character address
//  Output      :   none
//  Description :   display only digit from string
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    if(NULL==str)
    {
        printf("Invalid string");
        return;
    }
    while(*str!='\0')
    {
        if((*str>='0') && (*str<='9'))
        {
            printf("%c",*str);
        }
        str++;
    }
}
//Entry point function : main()
int main()
{
    char arr[20];
    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);
    DisplayDigit(arr);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}


