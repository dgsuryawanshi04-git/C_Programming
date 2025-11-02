#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description :   It is used to count the even digits in a number.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0;
    int ifrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            ifrequency++;
        }
    
        iNo = iNo / 10;
    }
    return ifrequency;

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