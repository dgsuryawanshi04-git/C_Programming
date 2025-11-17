#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Digits
//  Description :   Display all such nos which contains 3 digits in it.
//  Input :         int, int
//  Output :        int  
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          15/11/2025
//
/////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iLength)
{   
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > 99 && Arr[iCnt] < 1000)
        {
            printf("%d ", Arr[iCnt]);
            iCount++;
        }
    }
    if(iCount == 0)
    {
        printf("No such elements found");
    }
}

int main()
{
    int iCnt = 0, iLength = 0;
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

    Digits(p, iLength);
    free(p);

    return 0;

}