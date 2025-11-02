#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : print_even_numbers
//  Description :   It is used to print even numbers up to n.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          25/10/2025
//
/////////////////////////////////////////////////////////////////////

void print_even_numbers(int limit)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d ",iCnt);

        }
    }
}

//Time Complxity: O(N)

int main()
{
    int limit = 0;

    printf("Enter limit: ");
    scanf("%d",&limit);

    print_even_numbers(limit);

    return 0;
    
}