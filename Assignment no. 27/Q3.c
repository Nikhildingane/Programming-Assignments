#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Difference
//  Input       :   character address
//  Output      :   integer
//  Description :   count capital character from string
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCap=0,iSmall=0;
    if(NULL==str)
    {
        return -1;
    }
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            iCap++;
        }
        else if((*str>='a')&&(*str<='z'))
        {
            iSmall++;
        }
        str++;
    }
    return (iCap-iSmall);
}
//Entry point function : main()
int main()
{
    char arr[20];
    int iRet=0;
    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);
    iRet=Difference(arr);
    printf("%d",iRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}


