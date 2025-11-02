#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : sum_of_even_factors
//  Description :   It is used to print sum of even factors of the number.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          25/10/2025
//
/////////////////////////////////////////////////////////////////////

int sum_of_even_factors(int number)
{
    int iCnt = 0, sum = 0;

     if(number < 0)
    {
        number = -number;
    }

    for(iCnt = 1; iCnt <= number/2; iCnt++)
    {
        if((number % iCnt) == 0)
        {
            if((iCnt % 2) == 0)
            {
            sum = sum + iCnt;
            }
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

    printf("%d\n",sum_of_even_factors(number));

    return 0;
    
}