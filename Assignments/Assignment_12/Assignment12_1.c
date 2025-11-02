#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : print_factors
//  Description :   It is used to print factors of the number.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          25/10/2025
//
/////////////////////////////////////////////////////////////////////

void print_factors(int number)
{
    int iCnt = 0;

    if(number < 0)
    {
        number = -number;
    }

    for(iCnt = 1; iCnt <= number/2; iCnt++)
    {
        if((number % iCnt) == 0)
        {
            printf("%d ",iCnt);
        }

    }
}

// time complexity: O(N/2)

int main()
{
    int number ;

    printf("Enter number: ");
    scanf("%d",&number);

    print_factors(number);

    return 0;
    
}