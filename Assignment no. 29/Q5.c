#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   StrRevX
//  Input       :   character address
//  Output      :   none
//  Description :   return index of last occurance of character from string
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    char *cStart=NULL,*cEnd=NULL;
    if(str==NULL)
    {
        return -1;
    }
    cStart=str;
    cEnd=str;
    while(*cEnd!='\0')
    {
        cEnd++;
    }
    cEnd--;
    while(cStart<cEnd)
    {
        char temp=*cStart;
        *cStart=*cEnd;
        *cEnd=temp;
        cStart++;
        cEnd--;
    }
}

//Entry point function : main()
int main()
{
    char arr[20];
    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);
    StrRevX(arr);
    printf("Modified string  is :\n%s",arr);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}




