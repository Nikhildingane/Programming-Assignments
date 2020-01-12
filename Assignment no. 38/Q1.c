#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Pattern
//  Input       :   character address
//  Output      :   none
//  Description :   print pattern
//  Author      :   Nikhil
//  Date        :   26/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(char *str)
{
    char *row=NULL,*col=NULL;
    if(str==NULL)
    {
        return;
    }
    row=str;
    col=str;
    while(*row!='\0')
    {
        col=str;
        while(*col!='\0')
        {
            printf("%c\t",*col);
            col++;
        }
        printf("\n");
        row++;
    }
}

//Entry point function : main()
int main()
{
    char Arr[30]={'\0'};
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
    Pattern(Arr);
    return 0;                       // return to operating system
}

