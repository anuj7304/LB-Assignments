// Problem Statement :- Accept Character from user and chck whether it is Digit  or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character : \n");
    scanf("%c",&cValue);

    bRet = CheckDigit(cValue);

    if(bRet == true)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not Digit\n");
    }

    return 0;
}