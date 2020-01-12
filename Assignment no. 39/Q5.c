#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   strRev
//  Input       :   character address,character address
//  Output      :   none
//  Description :   concat second string after end of first string
//  Author      :   Nikhil
//  Date        :   26/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void strRev(char *str1,char *str2)
{
    int iCnt1=0,iCnt2=0;
    char *temp=NULL;
    if((str1==NULL)||(str2==NULL))
    {
        return;
    }
    temp=str2;
    while((*str1!='\0'))
    {
        str1++;
    }
    while(*(str2+1)!='\0')
    {
        str2++;
    }
    while(str2>=temp)
    {
        *str1=*str2;
        str2--;
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
    strRev(Arr,Brr);
    printf("Modified string is :\n%s",Arr);
    return 0;                       // return to operating system
}




