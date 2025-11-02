#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay
//  Description :   It is used to display the range between two numbers in  reverse order.
//  Input :         int, int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          25/10/2025
//
/////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart > iEnd)
        {
            printf("Invalid range");
        }
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        
        printf("%d ",iCnt);
       
    }
}

// time complexity : O(N)
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending point: ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
    
}