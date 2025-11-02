#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayEven
//  Description :   It is used to display the all even numbers in between range of two numbers
//  Input :         int, int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          25/10/2025
//
/////////////////////////////////////////////////////////////////////


void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart > iEnd )
        {
            printf("Invalid range");
        }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {   
            printf("%d ",iCnt);
        }
        
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

    RangeDisplayEven(iValue1, iValue2);

    return 0;
    
}