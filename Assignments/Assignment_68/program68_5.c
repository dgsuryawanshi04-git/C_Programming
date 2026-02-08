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
    static char ch = 'a';

    if(ch <= 'f')
    {
        printf("%c\t",ch);
        ch++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}