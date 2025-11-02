#include<stdio.h>

int factorial(int iNo)
{
    int fact = 1, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
 
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        fact = fact * iCnt;
    } 
    return fact;

}

// Time complexity: O(N)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = factorial(iValue);

    printf("Factorial is: %d",iRet);

    return 0;
    
}