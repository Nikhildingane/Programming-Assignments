#include<stdio.h>
#include<string.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   main
//  Input       :   None
//  Output      :   None
//  Description :   Display string
//  Author      :   Nikhil
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Entry point function : main()
int main()
{
    char Name[30]={'0'};
    printf("Please enter full name:\n");
    //scanf("%s",&Name); if we use scanf to enter string then when we enter space between words it is consider as end of that string
    gets(Name);
    printf("Your name is %s",Name);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
