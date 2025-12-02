/////////////////////////////////////////////////////////////////////
//
//  Function Name : DispayDigits
//  Description :   Accept string from user and display only digits from that.
//  Input :         string
//  Output :        string
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          29/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<Stdio.h>

void DisplayDigits(char str[])
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c ",*str);
        }
        str++;
    } 
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter String:\n");
    scanf("%[^'\n']s", Arr);

    DisplayDigits(Arr);

    return 0;
}