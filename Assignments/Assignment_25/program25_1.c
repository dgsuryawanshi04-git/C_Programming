#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description :   Return Difference between summation of even nos and summation of odd nos.
//  Input :         int, int
//  Output :        int  
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          15/11/2025
//
/////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iSum1 = 0, iSum2 = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }
        if((Arr[iCnt] % 2) != 0)
        {
            iSum2 = iSum2 + Arr[iCnt];
        }
    }

    return iSum1 - iSum2;
}   

int main()
{
    int iCnt = 0, iLength = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of Elements:");
    scanf("%d", &iLength);

    p = (int *)malloc(iLength * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memory.");
        return -1;
    }

    printf("Enter %d elements:",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iLength);

    printf("Difference is: %d", iRet);

    free(p);

    return 0;

}