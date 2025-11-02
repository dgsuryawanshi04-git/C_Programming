#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    float Area = 0.0;

    Area = PI * fRadius * fRadius;

    return Area;

}

//time complexity: O(1)


int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of the Circle %f ",dRet);

    return 0;
    
}