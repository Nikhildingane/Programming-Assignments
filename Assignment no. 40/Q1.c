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
    int temp1=iNo,temp2=iNo;
    while(iNo!=0)
    {
        temp1=temp2;
        while(temp1!=0)
        {
            printf("%d\t",temp1%10);
            temp1=temp1/10;
        }
        printf("\n");
        iNo=iNo/10;
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

