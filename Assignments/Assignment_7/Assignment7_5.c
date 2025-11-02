#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int No = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        No = iNo * iCnt;
        printf(" %d ", No);
    
    }
}

// Time Complexity: O(N)

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

   MultipleDisplay(iValue);

    return 0;

}