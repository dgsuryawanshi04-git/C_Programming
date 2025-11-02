#include<stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("Number is positive\n");
    }
    else if(num < 0)
    {
        printf("NUmber is negative\n");
    }
    else
    {
        printf("Number is Zero");
    }

}

int main()
{
    int number = 0;

    printf("Enter number:\n");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
    
}