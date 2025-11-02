#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
            printf(" * ", iCnt);
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
            printf(" # ", iCnt);
    }
}

// Time Cimplexity: O(N^2)

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
    
}