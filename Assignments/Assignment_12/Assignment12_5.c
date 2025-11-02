#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////
//
//  Function Name : is_divisible_by_five
//  Description :   It is used to check the number is divisible by 5.
//  Input :         int
//  Output :        Yes / No
//  Auther :        Digvijay Gokul Suryawanshi
//  Date :          25/10/2025
//
/////////////////////////////////////////////////////////////////////

bool is_divisible_by_five(int number)
{
    if((number % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}



int main(void)
{
    int number ;

    printf("Enter number: ");
    scanf("%d",&number);

    printf("%s\n",is_divisible_by_five(number) ? "Yes" : "No");

    return 0;
    
}