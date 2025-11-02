// ??????
#include<stdio.h>

char DisplayConvert(char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c",CValue + 32);

    }
    else if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c",CValue - 32);
    }
    
}

int main()
{
    char cValue = '\0';

    printf("Enter Character: ");
    scanf("%d",cValue);

    DisplayConvert(cValue);

    return 0;
    
}