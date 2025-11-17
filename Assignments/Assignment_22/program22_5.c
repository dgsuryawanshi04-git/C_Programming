#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Frequency
//  Description :   Return frequency of given number.
//  Input :         int, int, int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          14/11/2025
//
/////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements:");
    scanf("%d", &iSize);

    printf("Enter the number: ");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements: ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p ,iSize, iValue);

    printf("%d",iRet);

    free(p);

    return 0;

}