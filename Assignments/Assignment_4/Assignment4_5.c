#include<stdio.h>

int FactorsDiff(int iNo)
{
    int iCnt = 0;
    int sum = 0, sum1 = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0 && iCnt <= iNo/2 )
        {
            sum = sum + iCnt;   
        
        }else 
        {
            sum1 = sum1 + iCnt; 
        }
    }

    return sum - sum1;   

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactorsDiff(iValue);

    printf("DIFFFRENCE : %d",iRet);

    return 0;
    
}