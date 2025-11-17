#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description :   Return count of even nos.
//  Input :         int, int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          14/11/2025
//
/////////////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iLength)
{
    int iCount = 0, iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements: ",iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p, iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;

}

/* Output

C:\Users\hp\Desktop\Assignments> Myexe exe
Enter number of elements: 6
Enter 6 elements: 85 66 3 80 93 88
Result is 3

*/