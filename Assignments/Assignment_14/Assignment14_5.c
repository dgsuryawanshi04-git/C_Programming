#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Count
//  Description :   It is used to count the frequency of digits that are less than 6.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////


int Count(int iNo)
{
    int iDigit = 0, ifrequency = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d", iRet);

    return 0;
}