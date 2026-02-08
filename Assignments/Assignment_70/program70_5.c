/////////////////////////////////////////////////////////////////////
//
//  Function Name : Mult()
//  Description :   Accept number from user and return products of digits.
//  Input :         int 
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          07/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Mult(int iNo)
{
    static int iMul = 1;
    
    if(iNo > 0)
    {
        int iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo / 10;
        Mult(iNo);
    }
    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Mult(iValue);
    printf("%d",iRet);

    return 0;
}