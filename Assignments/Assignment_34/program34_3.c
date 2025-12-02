
/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Display alphabets if user provides Capital then prints onwards character and if user enter small then reverse character.
//  Input :         char
//  Output :        char
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    char Cnt = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        for(Cnt = ch; Cnt <= 'Z'; Cnt++)
        {
            printf("%c ",Cnt);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
         for(Cnt = ch; Cnt >= 'a'; Cnt--)
        {
            printf("%c ",Cnt);
        }
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