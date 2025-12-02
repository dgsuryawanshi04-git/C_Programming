
/////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description :   Display the difference between capital character counts and small characters count.
//  Input :         string
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
    int iCntCapital = 0, iCntSmall = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCntCapital++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCntSmall++;
        }
        str++;
    }
    return iCntSmall - iCntCapital;
}
int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%s[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d\n", iRet);

    return 0;
    
}