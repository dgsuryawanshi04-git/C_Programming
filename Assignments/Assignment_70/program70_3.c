/////////////////////////////////////////////////////////////////////
//
//  Function Name : Strlen()
//  Description :   Accept string from user and return count of number of characters.
//  Input :         string 
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          07/01/2026
//
/////////////////////////////////////////////////////////////////////



#include<stdio.h>


int Strlen(char *str)
{ 
    static int iCount = 0;
    if(*str != '\0')
    {
        iCount++;
        *str++;
        Strlen(str);
    }

    return iCount;    
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string:\n");
    scanf("%s ",arr);

    iRet = Strlen(arr);

    printf("%d",iRet);
    
    return 0;
}