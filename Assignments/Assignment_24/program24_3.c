#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description :   Return Difference between largest and Smallest number of given Array.
//  Input :         int, int
//  Output :        int  
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          15/11/2025
//
/////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0, iMax = 0;
    iMin = Arr[0];
    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMax - iMin;
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