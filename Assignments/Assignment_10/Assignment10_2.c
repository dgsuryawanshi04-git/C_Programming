#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    
    float Area = 0.0f;

    Area = fWidth * fHeight;

    return Area;

}

// Time complexity: O(1)


int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0f;

    printf("Enter Width: ");
    scanf("%f",&fValue1);

    printf("Enter Hieght: ");
    scanf("%f",&fValue2);


    dRet = RectArea(fValue1, fValue2);

    printf("Area of the Rectangle %f ",dRet);

    return 0;
    
}