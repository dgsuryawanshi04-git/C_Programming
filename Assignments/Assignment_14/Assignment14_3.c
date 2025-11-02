#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : CountTwo
//  Description :   It is used to count the frequency of two.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit = 0, ifrequency = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d", iRet);

    return 0;
}