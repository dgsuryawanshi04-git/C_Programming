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

int Maximum(PNODE Head)
{
    int iMax = 0;
    PNODE temp = Head;

    while(temp != NULL)
    {
        if(temp->data > iMax)
        {
            iMax = temp->data;
        }
        temp = temp->next;
    }
    return iMax;
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
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);

    iRet = Maximum(First);

    printf("Maximum element is: %d\n",iRet);
    return 0;

    
}