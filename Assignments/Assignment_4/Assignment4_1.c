#include<stdio.h>

int MultFactors(int iNo)
{
    int iCnt = 0;
    int mul = 1;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            mul = mul * iCnt;
           
        }
        
    }
    return mul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MultFactors(iValue);

    printf("%d",iRet);

    return 0;
    
}