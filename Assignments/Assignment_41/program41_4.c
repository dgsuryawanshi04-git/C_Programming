/////////////////////////////////////////////////////////////////////
//
//  Function Name : Fact
//  Description :   Return factorial of the number.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          3/12/2025
//
/////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Fact(int iNo)
{

    static int ifact = 1;
    if(iNo != 0)
    {
        ifact = ifact * iNo;
        iNo--;
        Fact(iNo);
    }
    return ifact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Fact(iValue);

    printf("Factorial is: %d", iRet);

    return 0;

}