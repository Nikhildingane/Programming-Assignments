#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   FirstChar
//  Input       :   character address,character
//  Output      :   integer
//  Description :   return index of first occurance of character from string
//  Author      :   Nikhil
//  Date        :   09/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str,char ch)
{
    int iCnt=0;
    if(str==NULL)
    {
        return -1;
    }
    while(*str!='\0')
    {
        if(*str==ch)
        {
            break;
        }
        iCnt++;
        str++;
    }
    return iCnt;
}

//Entry point function : main()
int main()
{
    char arr[20];
    char cValue='a';
    int iRet=0;
    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);
    getchar();
    printf("Enter the character:\n");
    scanf("%c",&cValue);
    iRet=FirstChar(arr,cValue);
    printf("Character location is : %d",iRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}


