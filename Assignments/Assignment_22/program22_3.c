#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description :   check 11 is present or not.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          14/11/2025
//
/////////////////////////////////////////////////////////////////////


bool Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }    
    }
    return false;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int * p = NULL;
    bool bRet = false;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memory..");
        return -1;
    }

    printf("Enter %d elements: ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}

