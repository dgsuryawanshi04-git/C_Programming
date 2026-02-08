/////////////////////////////////////////////////////////////////////
//
//  Function Name : Min()
//  Description :   Accept number from user and return smallest digits.
//  Input :         int 
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          07/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Min(int iNo)
{
    static int iMin = 9;
    if(iNo > 0)
    {
        int iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Min(iValue);
    printf("%d",iRet);

    return 0;
}