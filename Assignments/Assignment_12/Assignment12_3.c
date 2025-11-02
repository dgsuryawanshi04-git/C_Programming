#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : sum_of_factors
//  Description :   It is used to print the sum of factors of the number.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          25/10/2025
//
/////////////////////////////////////////////////////////////////////

int sum_of_factors(int number)
{
    int iCnt = 0, sum = 0;

    for(iCnt = 1; iCnt <= number/2; iCnt++)
    {
        if((number % iCnt) == 0)
        {
            sum = sum + iCnt;
        }

    }
    return sum;

}

// time complexity : O(N/2)

int main()
{
    int number ;

    printf("Enter number: ");
    scanf("%d",&number);

    printf("%d\n",sum_of_factors(number));

    return 0;
    
}