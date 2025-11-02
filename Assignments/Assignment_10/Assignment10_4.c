

#include<stdio.h>

double FhtoCs(float fTemp)
{
    float celsius = ((fTemp - 32) * (5.0/9.0));
     
        return celsius;

}

// time complexity: O(1)


int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("temperature in celsius: %f ",dRet);

    return 0;
    
}