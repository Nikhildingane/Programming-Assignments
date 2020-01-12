#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   strCatX
//  Input       :   character address,character address
//  Output      :   none
//  Description :   concat alternate characters of second string after end of first string
//  Author      :   Nikhil
//  Date        :   26/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void strCatX(char *str1,char *str2)
{
    int iCnt1=0,iCnt2=0;
    if((str1==NULL)||(str2==NULL))
    {
        return;
    }
    while(*str1!='\0')
    {
        str1++;
    }
    while(*str2!='\0')
    {
        *str1=*str2;
        str2=str2+2;
        str1++;
    }
    *str1='\0';
}

//Entry point function : main()
int main()
{
    char Arr[50]={'\0'};
    char Brr[30]={'\0'};
    printf("Enter first string :\n");
    scanf("%[^'\n']s",Arr);
    fflush(stdin);
    printf("Enter second string :\n");
    scanf("%[^'\n']s",Brr);
    strCatX(Arr,Brr);
    printf("Modified string is :\n%s",Arr);
    return 0;                       // return to operating system
}



