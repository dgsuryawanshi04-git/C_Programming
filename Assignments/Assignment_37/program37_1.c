/////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkChar
//  Description :   Accept one character from user and check it present in given string or not. 
//  Input :         string , char
//  Output :        string
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;

}

int main()
{
    char arr[20] = {'\0'};
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character:\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;

}