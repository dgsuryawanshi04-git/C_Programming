/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display()
//  Description :   Accept number from user and display pattern.
//  Input :         int
//  Output :       -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          07/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    static char ch = 'A';
    if(ch <= ('A' + iNo-1))
    {
        printf("%c\t",ch);
        ch++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}