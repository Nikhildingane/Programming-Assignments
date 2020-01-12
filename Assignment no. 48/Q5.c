
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Display
//  Input       :   integer
//  Output      :   none
//  Description :   draw pattern using reccuresive function
//  Author      :   Nikhil
//  Date        :   05/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static int i=1;
    char ch='a';
    if(i<=iNo)
    {
        printf("%c\t",(ch-1)+i);
        i++;
        Display(iNo);
    }
}

//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;                       // return to operating system
}



