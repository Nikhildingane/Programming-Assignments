#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Max
//  Input       :   T,T,T           (where T is generic data type)
//  Output      :   T
//  Description :   Generic program to find largest number from three numbers
//  Author      :   Nikhil
//  Date        :   21/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
T Max(T no1,T no2,T no3)
{
    if((no1>=no2)&&(no1>=no3))
    {
        return no1;
    }
    else if((no2>=no1)&&(no2>=no3))
    {
        return no2;
    }
    else
    {
        return no3;
    }
}

//Entry point function : main()
int main()
{
    int a=0,b=0,c=0;
    cout<<"Enter three numbers:"<<endl;
    cin>>a>>b>>c;
    cout<<"Max number is : "<<endl<<Max(a,b,c);
    return 0;                       // return to operating system
}


