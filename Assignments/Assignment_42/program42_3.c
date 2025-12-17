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

int Addition(PNODE Head)
{
    int Sum = 0;
    PNODE temp = Head;

    while(temp != NULL)
    {
        Sum = Sum + temp->data;
        temp = temp->next;
    }
    return Sum;
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

    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    Display(First);

    iRet = Addition(First);

    printf("Addition is: %d\n",iRet);
    return 0;

    
}