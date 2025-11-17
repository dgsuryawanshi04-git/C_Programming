#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : DigitsSum
//  Description :   Display the summation of all digits.
//  Input :         int, int
//  Output :        int  
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          17/11/2025
//
/////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iSize)
{
    int iCnt = 0, iDigits = 0, iSum = 0, iNum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iNum = Arr[iCnt];
        iSum = 0;       

        while(iNum != 0)
        {
            iDigits = iNum % 10;  
            iSum = iSum + iDigits; 
            iNum = iNum / 10;      
        }

        printf("Sum of digits of %d is %d\n", Arr[iCnt], iSum);
    }
}

int main()
{
    int iCnt = 0, iLength = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iLength);

    p = (int *)malloc(iLength * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory.\n");
        return -1;
    }

    printf("Enter %d elements:\n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    DigitsSum(p, iLength);

    free(p);
    return 0;
}

