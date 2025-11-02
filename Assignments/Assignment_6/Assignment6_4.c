#include<stdio.h>

int Multiply(int num1, int num2, int num3)
{
    int mul = 1;
    if(num1 == 0 ) 
    {
         return num2 * num3;
    }
    else if(num2 == 0) 
    {
        return num1 * num3; 
    }
    else if(num3 == 0)
    {
        return num2 * num1;
    }
    else
    {
        return num1* num2 * num3;
    }

}

// Time complexity: O(1)

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Mltiplication is:%d",iRet);

    return 0;
}