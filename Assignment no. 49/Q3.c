#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Strlen
//  Input       :   character address
//  Output      :   integer
//  Description :   count characters from string
//  Author      :   Nikhil
//  Date        :   01/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Strlen(char *str)
{
    static int iCnt=0;
    if(*str!='\0')
    {
        iCnt++;
        Strlen(++str);
    }
    return iCnt;
}

//Entry point function : main()
int main()
{
    char Arr[30]={'\0'};
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
    printf("Length of string is :\n%d",Strlen(Arr));
    return 0;                       // return to operating system
}

