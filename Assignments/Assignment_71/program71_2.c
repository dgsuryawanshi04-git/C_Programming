/////////////////////////////////////////////////////////////////////
//
//  Function Name : Max()
//  Description :   Accept number from user and return largest digits.
//  Input :         int 
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          07/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Max(int iNo)
{
    static int iMax = 0;
    if(iNo > 0)
    {
        int iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
        Max(iNo);
    }
    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Max(iValue);
    printf("%d",iRet);

    return 0;
}