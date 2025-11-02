#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : sum_natural_numbers
//  Description :   It is used to print sum of natural numbers up to n.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          25/10/2025
//
/////////////////////////////////////////////////////////////////////

int sum_natural_numbers(int limit)
{
    int iCnt = 0, sum = 0;

    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        sum = sum + iCnt;

    }
    return sum;
}

//Time Complxity: O(N)

int main()
{
    int limit = 0;

    printf("Enter limit: ");
    scanf("%d",&limit);

    printf("%d\n",sum_natural_numbers(limit));

    return 0;
    
}