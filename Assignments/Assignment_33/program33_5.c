
/////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplaySchedule
//  Description :   Display exam shedule accepting division of the class.
//  Input :         char
//  Output :        char
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          28/11/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if (chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7 AM\n");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10.30 AM\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your devision:\n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}