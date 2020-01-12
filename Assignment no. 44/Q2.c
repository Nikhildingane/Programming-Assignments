

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
//  Name        :   DisplayPallindrome
//  Input       :   structure address
//  Output      :   none
//  Description :   Display all palindrome elements of singly linked list
//  Author      :   Nikhil
//  Date        :   26/10/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayPallindrome(PNODE Head)
{
    int Rev=0,iTemp=0;
    while(Head!=NULL)
    {
        Rev=0;
        iTemp=Head->Data;
        while(iTemp!=0)
        {
            Rev=(Rev*10)+(iTemp%10);
            iTemp=iTemp/10;
        }
        if(Head->Data==Rev)
        {
            printf("%d\t",Head->Data);
        }
        Head=Head->Next;
    }
}

//Entry point function : main()
int main()
{
    PNODE First=NULL;

    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,414);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);

    printf("\nPalindrome numbers in linked list are :\n");
    DisplayPallindrome(First);

    return 0;                       // return to operating system
}







