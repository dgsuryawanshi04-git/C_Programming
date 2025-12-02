
/////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description :   Check the vowels are present in the character or not.
//  Input :         String
//  Output :        char
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}

int main()
{
    char arr[20] = {'\0'};
    BOOL bRet = FALSE;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowels\n");
    }
    return 0;
}