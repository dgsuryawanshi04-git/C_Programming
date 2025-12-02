/////////////////////////////////////////////////////////////////////
//
//  Function Name : StrCpyCap
//  Description :   Accept string from user and copy into another string and Convert all characters of string in capital case.
//  Input :         string
//  Output :        string
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
        {
            *src = *src - 32;
        }
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30] = {'\0'};

    StrCpyCap(arr, brr);

    printf("%s\n",brr);

    return 0;
}