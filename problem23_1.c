// Problem Statement :- Accept Character from user and chck whether it is alphabet or not.

#include<stdio.h>

void CheckAlphabet(char ch)
{
    if((ch >= 'a') && (ch <= 'z') || ((ch >= 'A') && (ch <= 'Z')))
    {
        printf("It is character\n");
    }
    else
    {
        printf("It is not character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : \n");
    scanf("%c",&cValue);

    CheckAlphabet(cValue);

    return 0;
}