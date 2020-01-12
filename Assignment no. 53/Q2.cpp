#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Frequency
//  Input       :   base address of array of type T, integer, T   (where T is of type generic data type)
//  Output      :   integer
//  Description :   return the frequency of given value in n values
//  Author      :   Nikhil
//  Date        :   21/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
int Frequency(T *arr,int iSize,T iNo)
{
    int iCnt=0;
    for(int i=0;i<iSize;i++)
    {
        if(iNo==arr[i])
        {
            iCnt++;
        }
    }
    return iCnt;
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
    cout<<"Enter the value to check frequency:\n";
    cin>>value;
    cout<<"Frequency is :\n"<<Frequency(iPtr,length,value);
    return 0;                       // return to operating system
}
