#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   RectArea
//  Input       :   float ,float
//  Output      :   double
//  Description :   calculate area of rectangle
//  Author      :   Nikhil
//  Date        :   12/09/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth,float fHeight)
{
    if((fWidth<0) || (fHeight<0))
    {
        return 0.0;
    }
    return (fWidth*fHeight);

}
//Entry point function : main()
int main()
{
    float fValue1=0.0,fValue2=0;
    double dRet=0.0;
    printf("Enter width:\n");
    scanf("%f",&fValue1);
    printf("Enter height:\n");
    scanf("%f",&fValue2);
    dRet=RectArea(fValue1,fValue2);
    printf("Rectangle Area is = %lf",dRet);
    getch();                        // I have written this because when we run direct executable file it does not hold result , this will help to hold the window
    return 0;                       // return to operating system
}
