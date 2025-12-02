
/////////////////////////////////////////////////////////////////////
//
//  Function Name : CountSmall
//  Description :   Count the small character of the given input.
//  Input :         string
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%s[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("Number of small characters:%d\n", iRet);

    return 0;
    
}