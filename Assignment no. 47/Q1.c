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
    static int i=1;
    if(i<=5)
    {
        printf("*\t");
        i++;
        Display();
    }
}

//Entry point function : main()
int main()
{
    Display();
    return 0;                       // return to operating system
}

