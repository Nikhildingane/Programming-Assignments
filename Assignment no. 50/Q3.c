#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   WhiteSpace
//  Input       :   character address
//  Output      :   integer
//  Description :   count small case characters from string
//  Author      :   Nikhil
//  Date        :   01/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int WhiteSpace(char *str)
{
    static int iCnt=0;
    if(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            iCnt++;
        }
        WhiteSpace(++str);
    }
    return iCnt;
}

//Entry point function : main()
int main()
{
    char Arr[30]={'\0'};
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
    printf("count of small characters is :\n%d",WhiteSpace(Arr));
    return 0;                       // return to operating system
}



