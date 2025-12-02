/////////////////////////////////////////////////////////////////////
//
//  Function Name : StrCpyRev
//  Description :   Accept string from user and copy into another string and Revrse it 
//  Input :         string
//  Output :        string
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    char *start = src;
    char *end = src;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30] = {'\0'};

    StrCpyRev(arr, brr);

    printf("%s\n",brr);

    return 0;
}