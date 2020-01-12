#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Pattern
//  Input       :   integer
//  Output      :   none
//  Description :   display pattern of numbers
//  Author      :   Nikhil
//  Date        :   26/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int temp1=iNo,temp2=0,rev=0;
    while(temp1!=0)
    {
        rev=(rev*10)+(temp1%10);
        temp1=temp1/10;
    }
    temp1=rev;
    temp2=rev;
    while(rev!=0)
    {
        iNo=rev;
        temp1=temp2;
        while((temp1!=0)&&(iNo!=0))
        {
            printf("%d\t",temp1%10);
            temp1=temp1/10;
            iNo=iNo/10;
        }
        printf("\n");
        rev=rev/10;
    }
}

//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;                       // return to operating system
}
