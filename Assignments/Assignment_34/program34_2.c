/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Display output like toggle.
//  Input :         char
//  Output :        char
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("%c\n", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("%c\n", ch);
    }
    else
    {
        printf("%c\n",ch);
    }

}
int main()
{
    char cValue = '\0';
    
    printf("Enter the character:\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}