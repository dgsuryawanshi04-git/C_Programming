#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CountFour
//  Description :   It is used to count the frequency of 4.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////


int CountFour(int iNo)
{
    int iDigit = 0, ifrequency = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 4)
        {
            ifrequency++;
           
        }
        
        iNo = iNo / 10;
    } 
    
    return ifrequency;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d", iRet);

    return 0;
}