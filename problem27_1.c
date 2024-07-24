// Problem Statement :- Acccept string from user and accept one character. check whether that charachter is present in string or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckCharacter(char *str, char ch)
{
    bool result = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            result = true;
            break;
        }
        else
        {
            result = false;
        }
        str++;
    }
    return result;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a charachter : \n");
    scanf("\n%c",&cValue);

    bRet = CheckCharacter(Arr,cValue);

    if(bRet == true)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Charachter not found\n");
    }

    return 0;
}