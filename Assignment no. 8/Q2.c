#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Display
//  Input       :   integer
//  Output      :   None
//  Description :   Print number in words
//  Author      :   Nikhil
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
        if((iNo>9) || (iNo<-9))
        {
            printf("Ivalid Number");
        }
        if(iNo==0)
        {
            printf("Zero");
        }
        else if((iNo==1) || (iNo==-1))
        {
            printf("One");
        }
        else if((iNo==2) || (iNo==-2))
        {
            printf("Two");
        }
        else if((iNo==3) || (iNo==-3))
        {
            printf("Three");
        }
        else if((iNo==4) || (iNo==-4))
        {
            printf("Four");
        }
        else if((iNo==5) || (iNo==-5))
        {
            printf("Five");
        }
        else if((iNo==6) || (iNo==-6))
        {
            printf("Six");
        }
        else if((iNo==7) || (iNo==-7))
        {
            printf("One");
        }
        else if((iNo==8) || (iNo==-8))
        {
            printf("One");
        }
        else if((iNo==9) || (iNo==-9))
        {
            printf("One");
        }
}

//Entry point function : main()
int main()
{
    int iValue=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    Display(iValue);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}

