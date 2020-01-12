#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   strlen
//  Input       :   character address,character address
//  Output      :   none
//  Description :   display length of two strings
//  Author      :   Nikhil
//  Date        :   26/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void strlen(char *str1,char *str2)
{
    int iCnt1=0,iCnt2=0;
    if((str1==NULL)||(str2==NULL))
    {
        return;
    }
    while((*str1!='\0')||(*str2!='\0'))
    {
        if(*str1!='\0')
        {
            iCnt1++;
            str1++;
        }
        if(*str2!='\0')
        {
            iCnt2++;
            str2++;
        }
    }
    printf("Length of first string is :\n%d",iCnt1);
    printf("\nLength of second string is :\n%d",iCnt2);
}

//Entry point function : main()
int main()
{
    char Arr[30]={'\0'};
    char Brr[30]={'\0'};
    printf("Enter first string :\n");
    scanf("%[^'\n']s",Arr);
    fflush(stdin);
    printf("Enter second string :\n");
    scanf("%[^'\n']s",Brr);
    strlen(Arr,Brr);
    return 0;                       // return to operating system
}

