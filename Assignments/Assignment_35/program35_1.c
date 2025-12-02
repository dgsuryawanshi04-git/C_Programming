
/////////////////////////////////////////////////////////////////////
//
//  Function Name : CountCapital
//  Description :   Count the capital letters.
//  Input :         String
//  Output :        int.
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("NUmber of capital characters are:%d\n", iRet);

    return 0;
}