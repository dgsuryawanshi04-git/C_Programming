/////////////////////////////////////////////////////////////////////
//
//  Function Name : FirstChar
//  Description :   Accept string and one character from the user return the index of last Ocuurance of that character.
//  Input :         string, char
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int lastO = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            lastO =  iCount;
        }
        str++;
        iCount++;
       
    }
    return lastO;

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

    iRet = LastChar(arr, cValue);
    
    printf("Character location is: %d\n", iRet);

    return 0;

}