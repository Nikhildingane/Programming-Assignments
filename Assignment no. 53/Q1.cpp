#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Display
//  Input       :   T,integer                           (where T is of type generic data type)
//  Output      :   none
//  Description :   Print the value for giver number of times
//  Author      :   Nikhil
//  Date        :   21/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void Display(T value,int iSize)
{
    for(int i=1;i<=iSize;i++)
    {
        cout<<value<<"\t";
    }
    cout<<endl;
}

//Entry point function : main()
int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);
    return 0;                       // return to operating system
}


