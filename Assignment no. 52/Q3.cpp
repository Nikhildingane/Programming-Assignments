#include<iostream>
#include<malloc.h>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   AddN
//  Input       :   base address of array of type generic, integer
//  Output      :   T                   (wherer T is of type generic)
//  Description :   return addition of n values
//  Author      :   Nikhil
//  Date        :   21/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
T AddN(T *arr,int iSize)
{
    T sum=(T)0;
    for(int i=0;i<iSize;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

//Entry point function : main()
int main()
{
    float *iPtr=NULL;
    int length=0;
    cout<<"Enter the number of elements:\n";
    cin>>length;
    iPtr=new float[length];
    cout<<"Enter the "<<length<<" elements:\n";
    for(int i=0;i<length;i++)
    {
        cin>>iPtr[i];
    }
    cout<<"Addition is :\n"<<AddN(iPtr,length);
    return 0;                       // return to operating system
}

