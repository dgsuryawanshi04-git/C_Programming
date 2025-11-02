#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int No = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
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

   Table(iValue);

    return 0;

}