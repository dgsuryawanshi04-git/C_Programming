/////////////////////////////////////////////////////////////////////
//
//  Function Name : Strlen()
//  Description :   Accept string from user and return count of whitespaces.
//  Input :         string 
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          07/01/2026
//
/////////////////////////////////////////////////////////////////////



#include<stdio.h>


int WhiteSpace(char *str)
{ 
    static int iCount = 0;
    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
            str++;
        }
        str++;
        WhiteSpace(str);
    }

    return iCount;    
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string:\n");
    fgets(arr, 20, stdin);

    iRet = WhiteSpace(arr);

    printf("%d",iRet);
    
    return 0;
}