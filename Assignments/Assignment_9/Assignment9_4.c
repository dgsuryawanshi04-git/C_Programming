#include<stdio.h>

int OddFactors(int iNo)
{
    int iCnt = 0;
    int fact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iCnt % 2) != 0)
        {
            fact = fact * iCnt;
        }   
    }
    return fact;
}

// Time Cimplexity: O(N)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    iRet = OddFactors(iValue);

    printf("Even factorial of given number is %d ",iRet);

    return 0;
}