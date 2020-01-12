#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   WordLength
//  Input       :   character address
//  Output      :   integer
//  Description :   return length of largest word from string
//  Author      :   Nikhil
//  Date        :   25/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int WordLength(char *str)
{
    int iLength=0,iCnt=0;

    if(str==NULL)
    {
        return -1;
    }

    while(*str!='\0')
    {
        if(*str!=' ')
        {
            iCnt=0;
            while((*(str+1)!=' ')&&(*(str+1)!='\0'))
            {
                str++;
                iCnt++;
            }
            if(iCnt>=iLength)
            {
                iLength=++iCnt;
            }
        }
        str++;
    }

    return iLength;
}

//Entry point function : main()
int main()
{
    char Arr[50]={'\0'};
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
    printf("Length of largest word is:\n%d",WordLength(Arr));
    return 0;                       // return to operating system
}


