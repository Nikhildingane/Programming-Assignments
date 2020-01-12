#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Display
//  Input       :   none
//  Output      :   none
//  Description :   draw pattern using reccuresive function
//  Author      :   Nikhil
//  Date        :   05/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    static char ch='a';
    if(ch<='f')
    {
        printf("%c\t",ch);
        ch++;
        Display();
    }
}

//Entry point function : main()
int main()
{
    Display();
    return 0;                       // return to operating system
}




