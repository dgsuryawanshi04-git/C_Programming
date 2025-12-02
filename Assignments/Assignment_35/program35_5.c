
/////////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Description :   Display given string in reverse order.
//  Input :         string
//  Output :        string
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Reverse(char *str)
{
    char *start = str;
    char *end = str;

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
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);
    printf("Reverse string is: %s",arr);

    return 0;
}