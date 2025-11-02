#include<stdio.h>

void CheckLeapYear(int year)
{
    if((year %4) == 0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not leap year");
    }
}

int main()
{
    int yr = 0;
    printf("Enter year: ");
    scanf("%d",&yr);

    CheckLeapYear(yr);

    return 0;
}