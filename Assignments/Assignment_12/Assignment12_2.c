#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : count_factors
//  Description :   It is used to count the factors of the number.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          25/10/2025
//
/////////////////////////////////////////////////////////////////////

int count_factors(int number)
{
    int iCnt = 0;
    int iCount = 0;

     if(number < 0)
    {
        number = -number;
    }

    for(iCnt = 1; iCnt <= number/2; iCnt++)
    {
        if((number % iCnt) == 0)
        {
            iCount++;
        }

    }
    return iCount;
}

// time complexity : O(N/2)

int main()
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d",&number);

    printf("%d\n",count_factors(number));

    return 0;
    
}