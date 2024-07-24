// Problem Statement :- Acccept string from user and accept one character. return index of first occurrence of that charachter.

#include<stdio.h>

int FirstOccurance(char *str, char ch)
{
    int iCnt = 0,iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
            break;
        } 
        iCnt ++;
        str++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char cValue = '\0';

    printf("Enter a string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a charachter : \n");
    scanf("\n%c",&cValue);

    printf("First Occurance of %c is %d",cValue,FirstOccurance(Arr,cValue));

    return 0;
}