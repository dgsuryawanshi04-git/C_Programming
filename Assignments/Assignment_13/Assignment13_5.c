#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : sum_even_numbers
//  Description :   It is used to find sum of even numbers up to n.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          25/10/2025
//
/////////////////////////////////////////////////////////////////////

int sum_even_numbers(int limit)
{
    int iCnt = 0, sum = 0;

    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            sum = sum + iCnt;

        }
    }
    return sum;
}

//Time Complxity: O(N)

int main(void)
{
    int limit = 0;

    printf("Enter limit: ");
    scanf("%d",&limit);

    printf("%d\n",sum_even_numbers(limit));

    return 0;
    
}