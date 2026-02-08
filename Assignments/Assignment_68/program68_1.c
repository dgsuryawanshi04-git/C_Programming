/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display()
//  Description :   Display pattern.
//  Input :        - 
//  Output :       -
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          07/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    static int i = 1;
    if(i <= 5)
    {
        printf("*\t");
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}