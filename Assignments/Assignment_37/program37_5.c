/////////////////////////////////////////////////////////////////////
//
//  Function Name : StrRevX
//  Description :   Accept string from user and reverse the string
//  Input :         string,
//  Output :        string
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
void StrRevX(char *str)
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

    StrRevX(arr);

    printf("Modified String is: %s\n", arr);

    return 0;
}