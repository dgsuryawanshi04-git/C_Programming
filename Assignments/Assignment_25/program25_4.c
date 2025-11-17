#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Display all such elements which are divisible by 3 and 5.
//  Input :         int, int
//  Output :        int  
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          15/11/2025
//
/////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 3) == 0 && (Arr[iCnt] % 5) == 0)
        {
            printf("%d ",Arr[iCnt]);
            iCount++;
        }
    }
    if(iCount == 0)
    {
        printf("No elements found");
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

    Display(p, iLength);
    free(p);

    return 0;

}