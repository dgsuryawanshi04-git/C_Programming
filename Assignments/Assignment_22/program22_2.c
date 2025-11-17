#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Frequency
//  Description :   Return difference between frequency of even no. and odd nos.
//  Input :         int, int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          14/11/2025
//
/////////////////////////////////////////////////////////////////////


int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iCount1 = 0, iCount2 = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount1++;
        }
        if((Arr[iCnt] % 2) != 0)
        {
            iCount2++;
        }
    }
    return iCount1 - iCount2;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int * p = NULL;

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

    iRet = Frequency(p, iSize);

    printf("%d", iRet);

    free(p);

    return 0;
}

/* output

Enter number of elements:7
Enter 7 elements: 85 66 3 80 93 88 90
1

C:\Users\hp\Desktop\Assignments> Myexe exe
Enter number of elements:5
Enter 5 elements: 22 24 6 88 11
3
*/ 
