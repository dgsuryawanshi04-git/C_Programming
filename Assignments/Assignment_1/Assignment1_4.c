#include<stdio.h>
#include<stdbool.h>

int Check( int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    
    }
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter Number:\n ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");

    }
    return 0;

}