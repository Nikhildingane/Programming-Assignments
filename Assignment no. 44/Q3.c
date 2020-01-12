

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
//  Name        :   DisplayProduct
//  Input       :   structure address
//  Output      :   none
//  Description :   display product of digits of numbers in linked list
//  Author      :   Nikhil
//  Date        :   26/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayProduct(PNODE Head)
{
    int iMult=0,iNo=0;
    while(Head!=NULL)
    {
        iMult=1;
        iNo=Head->Data;
        while(iNo!=0)
        {
            if((iNo%10)!=0)
            {
                iMult=iMult*(iNo%10);
            }
            iNo=iNo/10;
        }
        printf("%d\t",iMult);
        Head=Head->Next;
    }
}

//Entry point function : main()
int main()
{
    PNODE First=NULL;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    printf("\n Product of digits of numbers in linked is  :\n");
    DisplayProduct(First);
    return 0;                       // return to operating system
}







