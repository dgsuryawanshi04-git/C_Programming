/////////////////////////////////////////////////////////////////////
//
//  Function Name : Strlen
//  Description :   Returns length of the string.
//  Input :         char
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          3/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Strlen(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;
        Strlen(str); 
       
    } 
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20] = {'\0'};

    printf("Enter string: ");
    scanf("%s", arr);

    iRet = Strlen(arr);

    printf("%d", iRet);

    return 0;
    
}