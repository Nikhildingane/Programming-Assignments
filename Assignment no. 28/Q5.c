#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   CountWhite
//  Input       :   character address
//  Output      :   integer
//  Description :   count white spaces from string
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCnt=0;
    if(NULL==str)
    {
        return;
    }
    while(*str!='\0')
    {
        if(*str==' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
//Entry point function : main()
int main()
{
    char arr[20];
    printf("Enter string:\n");
    scanf("%[^'\n']s",arr);
    printf("%d",CountWhite(arr));
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}


