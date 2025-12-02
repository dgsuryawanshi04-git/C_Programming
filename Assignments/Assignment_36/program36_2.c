
/////////////////////////////////////////////////////////////////////
//
//  Function Name : struprX
//  Description :   convert input string into uppercase.
//  Input :         string
//  Output :        string
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void struprX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    struprX(arr);

    printf("Modified string is: %s\n", arr);

    return 0;

}