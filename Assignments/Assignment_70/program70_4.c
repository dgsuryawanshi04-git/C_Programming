/////////////////////////////////////////////////////////////////////
//
//  Function Name : Strlen()
//  Description :   Accept string from user and return count of number of characters.
//  Input :         int 
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          07/01/2026
//
/////////////////////////////////////////////////////////////////////



#include<stdio.h>

int Fact(int iNo)
{ 
    static int iFact = 1;
    if(iNo > 0)
    {
        iFact = iFact * iNo;
        iNo--;
        Fact(iNo);
    }
    return iFact;
}

int main()
{
    int iRet = 0, iValue = 0;

    printf("Enter NUmber:\n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("Factorial of the number : %d is : %d\n",iValue, iRet);
    
    return 0;
}