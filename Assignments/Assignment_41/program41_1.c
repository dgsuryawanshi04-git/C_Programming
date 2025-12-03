
/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   display pattern (Recursive program)
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          3/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{

    while(iNo > 0)
    {
        printf("%d\t",iNo);
        if(iNo > 0)
        {
            printf("*\t");
        }
        iNo--;
        
    }
    Display(iNo);
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;

}