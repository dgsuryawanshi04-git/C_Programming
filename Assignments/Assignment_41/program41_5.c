/////////////////////////////////////////////////////////////////////
//
//  Function Name : Mult
//  Description :   Return multiplication of all digits.
//  Input :         int
//  Output :        int
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          3/12/2025
//
/////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Mult(int iNo)
{
    static int imul = 1;
    int iDigit = 0;
    
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        imul = imul * iDigit;
        iNo = iNo / 10;
        
        Mult(iNo);   
    }
    
    return imul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter String: ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("Multiplication of Digits: %d", iRet);

    return 0;

}