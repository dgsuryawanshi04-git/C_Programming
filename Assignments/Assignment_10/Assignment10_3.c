#include<stdio.h>

int KMtoMeter(int iNo)
{
    int KM = 1000;
    int meter = 0;

    meter = iNo * KM;

    return meter;

}

// Time complexity: O(1)

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("KM Converts into meter: %d",iRet);

    return 0;
    
}