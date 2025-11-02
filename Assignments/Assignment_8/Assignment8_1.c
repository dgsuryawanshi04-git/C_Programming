#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Number is small\n");
    }
    else if(iNo >= 50 && iNo <= 100)
    {
        printf("Number is medium\n");
    }
    else
    {
        printf("number is large\n");
    }
}

// Time Complexity: O(N)

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

   Number(iValue);

    return 0;

}