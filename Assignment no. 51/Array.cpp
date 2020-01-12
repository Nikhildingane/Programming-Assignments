#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int isize;
    public:
        Array(int value=10)
        {
            cout<<"Inside constructor\n";
            this->isize=value;
            this->Arr=new int[isize];
        }
        Array(Array &refobj)
        {
            cout<<"Inside copy constructor\n";
            this->isize=refobj.isize;
            this->Arr=new int[this->isize];
            for(int i=0;i<isize;i++)
            {
                this->Arr[i]=refobj.Arr[i];
            }
        }
        ~Array()
        {
            cout<<"Inside Destructor\n";
        }
        inline void Accept();
        inline void Display();
};
void Array::Accept()
{
        cout<<"Please enter the values:\n";
        for(int i=0;i<this->isize;i++)
        {
            cin>>Arr[i];
        }
}
void Array::Display()
{
    cout<<"Elements are:\n";
    for(int i=0;i<this->isize;i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<endl;
}

class ArrSearch:public Array
{
    public:
        ArrSearch(int value=10):Array(value)
        {}
        ~ArrSearch()
        {
            cout<<"Inside ArrSearch Destructor\n";
        }
        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

int ArrSearch::SearchFirst(int iNo)
{
    int i=0;
    for(i=0;i<isize;i++)
    {
        if(Arr[i]==iNo)
        {
            break;
        }
    }
    if(i==isize)
    {
        return -1;
    }
    else
    {
        return i;
    }
}

int ArrSearch::Frequency(int iNo)
{
    int iCnt=0;
    for(int i=0;i<isize;i++)
    {
        if(Arr[i]==iNo)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch::SearchLast(int iNo)
{
    int iPos=0;
    for(int i=0;i<isize;i++)
    {
        if(Arr[i]==iNo)
        {
            iPos=i;
        }
    }
    return iPos;
}

int ArrSearch::EvenCount()
{
    int iCnt=0;
    for(int i=0;i<isize;i++)
    {
        if((Arr[i]%2)==0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch::OddCount()
{
    int iCnt=0;
    for(int i=0;i<isize;i++)
    {
        if((Arr[i]%2)==1)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch::SumAll()
{
    int iSum=0;
    for(int i=0;i<isize;i++)
    {
        iSum=iSum+Arr[i];
    }
    return iSum;
}

int main()
{
    cout<<"Inside main\n";

    ArrSearch sobj(5);
    sobj.Accept();
    sobj.Display();

    int iret=sobj.Frequency(11);
    cout<<"Frequency is :"<<iret<<endl;

    iret=sobj.SearchFirst(11);
    cout<<"First occureance is :"<<iret<<endl;

    iret=sobj.SearchLast(11);
    cout<<"Last occureance is :"<<iret<<endl;

    iret=sobj.EvenCount();
    cout<<"Even count is :"<<iret<<endl;

    iret=sobj.OddCount();
    cout<<"Odd count is :"<<iret<<endl;

    iret=sobj.SumAll();
    cout<<"Sum is :"<<iret<<endl;

    return 0;
}
