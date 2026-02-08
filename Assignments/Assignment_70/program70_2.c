/////////////////////////////////////////////////////////////////////
//
//  Function Name : sum()
//  Description :   Accept number from user and return summation of its digits.
//  Input :         int 
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          07/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Sum(int iNo)
{
    static int iSum = 0;
    
    if(iNo > 0)
    {
        int iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        Sum(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Sum(iValue);
    printf("%d",iRet);

    return 0;
}