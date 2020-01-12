#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   CircleArea
//  Input       :   float
//  Output      :   double
//  Description :   calculate area of circle
//  Author      :   Nikhil
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    if(fRadius<0)
    {
        return 0.0;
    }
    return (3.14*fRadius*fRadius);
}

//Entry point function : main()
int main()
{
    float fValue=0.0;
    double dRet=0.0;
    printf("Enter radius:\n");
    scanf("%f",&fValue);
    dRet=CircleArea(fValue);
    printf("Cicle Area is = %lf",dRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
