

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   InsertFirst
//  Input       :   address of structure pointer,integer
//  Output      :   none
//  Description :   insesrt element at first position in the linked list
//  Author      :   Nikhil
//  Date        :   26/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head,int iNo)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    if(newn==NULL)
    {
        return;
    }

    newn->Data=iNo;
    newn->Next=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->Next=*Head;
        *Head=newn;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   Display
//  Input       :   structure address
//  Output      :   none
//  Description :   display all elements in linked list
//  Author      :   Nikhil
//  Date        :   26/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(PNODE Head)
{
    while(Head!=NULL)
    {
        printf("%d\t",Head->Data);
        Head=Head->Next;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   DisplaySmall
//  Input       :   structure address
//  Output      :   none
//  Description :   display smallest digit of all numbers in linked list
//  Author      :   Nikhil
//  Date        :   26/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplaySmall(PNODE Head)
{
    int iSmall=0,iNo=0;
    while(Head!=NULL)
    {
        iNo=Head->Data;
        iSmall=(iNo%10);
        while(iNo!=0)
        {
            if(iSmall>(iNo%10))
            {
                iSmall=iNo%10;
            }
            iNo=iNo/10;
        }
        printf("%d\t",iSmall);
        Head=Head->Next;
    }
}

//Entry point function : main()
int main()
{
    PNODE First=NULL;

    InsertFirst(&First,415);
    InsertFirst(&First,532);
    InsertFirst(&First,250);
    InsertFirst(&First,11);

    Display(First);

    printf("\n smallest digits of numbers in linked is  :\n");
    DisplaySmall(First);
    return 0;                       // return to operating system
}







