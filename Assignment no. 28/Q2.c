#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   struprx
//  Input       :   character address
//  Output      :   none
//  Description :   convert string into upper case
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void struprx(char *str)
{
    if(NULL==str)
    {
        return;
    }
    while(*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            *str=*str-32;
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
    struprx(arr);
    printf("Modified string is : %s",arr);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}


