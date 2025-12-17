#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int SearchFirstOcc(PNODE Head, int no)
{
    int iPos = 1, iLast = 0;
    PNODE temp = Head;
    while(temp != NULL)
    {
        if(temp->data == no)
        {
            iLast = iPos;       
        }
        temp = temp->next;
        iPos++;
    }
    return iLast;
}
void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;

    if(*Head == NULL)
    {
        (*Head) = newn;
    }
    else
    {
        newn->next = (*Head);
        (*Head) = newn;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0, iValue = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    Display(First);

    iValue = 30;
     printf("Input element: %d\n",iValue);

    iRet = SearchFirstOcc(First, iValue);

    printf("Occurence position is: %d\n",iRet);
    return 0;

    
}