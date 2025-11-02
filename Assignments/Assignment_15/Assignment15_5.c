#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description :   It is used to count the sum of even digits and odd digits.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0;
    int iSum1 = 0, iSum2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }
    
        iNo = iNo / 10;
    }
    return iSum1 - iSum2;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
    
}