/////////////////////////////////////////////////////////////////////
//
//  Function Name : Small()
//  Description :   Accept string from user and return count number of small characters.
//  Input :         string 
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          07/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Small(char *str)
{ 
    static int iCount = 0;
    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
        Small(str);
    }

    return iCount;    
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string:\n");
    fgets(arr, 20, stdin);

    iRet = Small(arr);

    printf("%d",iRet);
    
    return 0;
}