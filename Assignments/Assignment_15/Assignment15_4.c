#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : MultDigits
//  Description :   It is used to calculate multiplication of all digits.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return iMult;
        }
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }

    return iMult;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
    
}