#include<stdio.h>

float percentage(int TMarks, int OMarks)
{
    float Per = 0.0;
    Per = ((float)OMarks/TMarks) * 100;
    return Per;
}

// Time complexity: O(1)

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Enter total marks:\n");
    scanf("%d", &iValue1);

    printf("Enter Obtain marks:\n");
    scanf("%d", &iValue2);

    fRet = percentage(iValue1, iValue2);

    printf("Percentage is: %f", fRet);

    return 0;
    

}