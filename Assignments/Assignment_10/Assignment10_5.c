#include<stdio.h>

float SquareMeter(int iValue)
{
    float SQfeet = 0.0929 * iValue;
    return SQfeet;
}

//Time complexity: O(1)

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("converted in Square Meter:%f",dRet);

    return 0;
}