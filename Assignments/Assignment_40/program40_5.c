/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   display pattern (Recursive program)
//  Input :         int
//  Output :        char
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          1/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 0;
    static char ch = 'a';
    while(iCnt < iNo)
    {
        if(ch >= 'a' && ch <= 'z')
        {
            printf("%c\t",ch);
            iCnt++;
            ch++;
        }        
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0 ;
}
    
