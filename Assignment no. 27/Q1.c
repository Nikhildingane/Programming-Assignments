#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   CountCapital
//  Input       :   character address
//  Output      :   integer
//  Description :   count capital character from string
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCnt=0;
    if(NULL==str)
    {
        return -1;
    }
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
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
    int iRet=0;
    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);
    iRet=CountCapital(arr);
    printf("%d",iRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

