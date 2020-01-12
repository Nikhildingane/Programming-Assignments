#include<iostream>
#include<malloc.h>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   AddN
//  Input       :   base address of array of type generic, integer
//  Output      :   T                   (wherer T is of type generic)
//  Description :   return smallest value from n values
//  Author      :   Nikhil
//  Date        :   21/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
T AddN(T *arr,int iSize)
{
    T tMin=arr[0];
    for(int i=1;i<iSize;i++)
    {
        if(tMin>arr[i])
        {
            tMin=arr[i];
        }
    }
    return tMin;
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
    cout<<"Smallest element is :\n"<<AddN(iPtr,length);
    return 0;                       // return to operating system
}



