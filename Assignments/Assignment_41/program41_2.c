/////////////////////////////////////////////////////////////////////
//
//  Function Name : Sum
//  Description :   Return Summation of all digits.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          3/12/2025
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Sum(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
        Sum(iNo);   
    }
    
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("Summation of Digits: %d", iRet);

    return 0;

}