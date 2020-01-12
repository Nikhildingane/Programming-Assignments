#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Reverse
//  Input       :   base address of array of type T, integer   (where T is of type generic data type)
//  Output      :   none
//  Description :   reverse the values of array in place
//  Author      :   Nikhil
//  Date        :   21/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void Reverse(T *arr,int iSize)
{
    for(int i=0,j=(iSize-1);i<j;i++,j--)
    {
        T temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
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
    Reverse(iPtr,length);
    for(int i=0;i<length;i++)
    {
        cout<<iPtr[i]<<"\t";
    }
    return 0;                       // return to operating system
}


