#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   SearchLast
//  Input       :   base address of array of type T, integer, T   (where T is of type generic data type)
//  Output      :   integer
//  Description :   return the last occurrence of given value in n values
//  Author      :   Nikhil
//  Date        :   21/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
int SearchLast(T *arr,int iSize,T iNo)
{
    int pos=-1;
    for(int i=0;i<iSize;i++)
    {
        if(iNo==arr[i])
        {
            pos=i+1;
        }
    }
    return pos;
}

int main()
{
    float *iPtr=NULL,value;
    int length=0;
    cout<<"Enter the number of elements:\n";
    cin>>length;
    iPtr=new float[length];
    cout<<"Enter the "<<length<<" elements:\n";
    for(int i=0;i<length;i++)
    {
        cin>>iPtr[i];
    }
    cout<<"Enter the value to check last occurrence:\n";
    cin>>value;
    cout<<"Last occurrence is :\n"<<SearchLast(iPtr,length,value);
    return 0;                       // return to operating system
}

