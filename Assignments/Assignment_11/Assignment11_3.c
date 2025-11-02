#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplaySum
//  Description :   It is used to display the sum of  between the range of two numbers
//  Input :         int, int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          25/10/2025
//
/////////////////////////////////////////////////////////////////////

int RangeDisplaySum(int iStart, int iEnd)
{
    int iCnt = 0, sum = 0;

    if(iStart > iEnd || iStart < 0)
    {
            printf("Invalid range\n");
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        sum = sum + iCnt;
        
    }
    return sum;

}

// time complexity : O(N)
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeDisplaySum(iValue1, iValue2);

    printf("Addition is %d", iRet);


    return 0;
    
}