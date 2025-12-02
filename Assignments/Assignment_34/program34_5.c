
/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Display characters decimal, octal and hexadecimal values.
//  Input :         char
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    int Ascii = 0;
    Ascii = (int)ch;
    printf("decimal value: %d\n", ch);
    printf("Octal value : %o\n", ch);
    printf("Hexadecimal value : %X\n", ch);
}

int main()
{
    char cValue = '\0';
    printf("Enter string: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}