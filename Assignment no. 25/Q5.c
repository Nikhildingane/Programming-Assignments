#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   DisplaySchedule
//  Input       :   character
//  Output      :   none
//  Description :   display exam time according division
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
    case 'A':
        printf("Your exam at 7 AM");
        break;
    case 'B':
        printf("Your exam at 8:30 AM");
        break;
    case 'C':
        printf("Your exam at 9:20 AM");
        break;
    case 'D':
        printf("Your exam at 10.30 AM");
        break;
    default:
        printf("Invalid division");
    }
}
//Entry point function : main()
int main()
{
    char cValue='\0';
    printf("Enter your division:\n");
    scanf("%c",&cValue);
    DisplaySchedule(cValue);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

