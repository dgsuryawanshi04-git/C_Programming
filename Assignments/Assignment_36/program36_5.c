/////////////////////////////////////////////////////////////////////
//
//  Function Name : CountWhite
//  Description :   Count white spaces of the given string
//  Input :         string
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<Stdio.h>

int CountWhite(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;

}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s", Arr);

    iRet = CountWhite(Arr);

    printf("Count of whiteSpaces:%d\n",iRet);
    
    return 0;
}