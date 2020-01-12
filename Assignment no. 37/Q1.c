#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   WordCount
//  Input       :   character address
//  Output      :   integer
//  Description :   count words from string
//  Author      :   Nikhil
//  Date        :   25/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int WordCount(char *str)
{
    int iCnt=0;
    if(str==NULL)
    {
        return -1;
    }
    if(*str!=' ')
    {
        iCnt=1;
    }
    else
    {
        iCnt=0;
    }
    while(*str!='\0')
    {
        if(*str==' ')
        {
            while(*str==' ')
            {
                str++;
            }
            if(*str=='\0')
            {
                break;
            }
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

//Entry point function : main()
int main()
{
    char Arr[50]={'\0'};
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
    printf("Number of words:\n%d",WordCount(Arr));
    return 0;                       // return to operating system
}

