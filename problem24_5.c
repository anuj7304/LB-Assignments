// Problem Statement :- Accept character from user and display its ASCII value in decimal , octal and hexadecimal format.

#include<stdio.h>

void DisplayASCII(char ch)
{
    printf("Decimal : %d\n",ch);
    printf("Octal : %o\n",ch);
    printf("Hexadecimal : 0X%x\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    DisplayASCII(cValue);

    return 0;
}