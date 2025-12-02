/////////////////////////////////////////////////////////////////////
//
//  Function Name : StrCpyRev
//  Description :   Accept string from user and copy into another string and Remove its all white spaces
//  Input :         string
//  Output :        string
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';

}

int main()
{
    char arr[30] = "Marvel lous Pyth on";
    char brr[30] = {'\0'};

    StrCpyX(arr, brr);

    printf("%s\n",brr);

    return 0;
}