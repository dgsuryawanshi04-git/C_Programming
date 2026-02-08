/////////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse()
//  Description :   Accept number from user and return its reverse number.
//  Input :         int 
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          07/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Reverse(int iNo)
{
    static int rev = 0;
    if(iNo >= 1)
    {
        int iDigit = iNo % 10;
        rev = rev * 10 + iDigit;
        iNo = iNo / 10;
        Reverse(iNo);
    }
    return rev;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    printf("%d",iRet);

    return 0;
}