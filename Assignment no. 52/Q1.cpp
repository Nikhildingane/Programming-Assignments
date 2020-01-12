#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Multiply
//  Input       :   T,T         (where T is generic data type)
//  Output      :   T
//  Description :   Return the product of two variable of type generic
//  Author      :   Nikhil
//  Date        :   21/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
T Multiply(T no1,T no2)
{
    T Result;
    Result=no1*no2;
    return Result;
}

//Entry point function : main()
int main()
{
    float iRet=0,a=20,b=30;
    iRet=Multiply(20.2f,30.7f);
    cout<<"Multiplication is :\n"<<iRet;
    return 0;                       // return to operating system
}

