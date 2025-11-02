#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int No = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
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

   TableRev(iValue);

    return 0;

}