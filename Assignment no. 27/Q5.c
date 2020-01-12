#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   strlenx
//  Input       :   character address
//  Output      :   integer
//  Description :   return length of string
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int strlenx(char *str)
{
    int iCnt=0;
    if(NULL==str)
    {
        return -1;
    }
    while(*str!='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Reverse
//  Input       :   character address
//  Output      :   none
//  Description :   print given string in reverse order
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    int iCnt=0;
    if(NULL==str)
    {
        return -1;
    }
    if(strlenx(str)<=0)
    {
        return -2;
    }
    for(iCnt=(strlenx(str)-1);iCnt>=0;iCnt--)
    {
        printf("%c",str[iCnt]);
    }
}
//Entry point function : main()
int main()
{
    char arr[20];
    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);
    Reverse(arr);
    return 0;
}
