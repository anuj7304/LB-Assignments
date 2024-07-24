// Problem Statement :- Acccept string from user and accept one character. return frequency of that charachter.

#include<stdio.h>

int CountCharacter(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount ++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    char cValue = '\0';

    printf("Enter a string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a charachter : \n");
    scanf("\n%c",&cValue);

    printf("Frequency of %c is %d",cValue,CountCharacter(Arr,cValue));

    return 0;
}