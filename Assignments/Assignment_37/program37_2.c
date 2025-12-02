/////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkChar
//  Description :   Accept one character from user and return the frequency that character from the string.
//  Input :         string, char
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int ChkChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
           iCount++;
        }
        str++;
    }
    return iCount;

}

int main()
{
    char arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character:\n");
    scanf(" %c", &cValue);

    iRet = ChkChar(arr, cValue);
    
    printf("Character frequency is: %d\n", iRet);

    return 0;

}