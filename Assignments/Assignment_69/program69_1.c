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
    static int i = 1;
    if(i <= iNo)
    {
        printf("*\t");
        i++;
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