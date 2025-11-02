#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : print_number
//  Description :   It is used to print the numbers from 1 to N.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          25/10/2025
//
/////////////////////////////////////////////////////////////////////

void print_number(int limit)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        printf("%d ",iCnt);

    }
}

//Time Complxity: O(N)

int main()
{
    int limit = 0;

    printf("Enter limit: ");
    scanf("%d",&limit);

    print_number(limit);

    return 0;
    
}