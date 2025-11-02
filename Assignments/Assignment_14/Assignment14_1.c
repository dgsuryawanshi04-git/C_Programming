#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description :   It is used to Display digits in reverse order.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;

    }

}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
    
}