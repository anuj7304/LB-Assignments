// Problem Statement :- Acccept string from user and accept one character. return index of Last occurrence of that charachter.

#include<stdio.h>

int LastOccurance(char *str, char ch)
{
    int iCnt = 0,iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
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

    printf("Last Occurance of %c is %d",cValue,LastOccurance(Arr,cValue));

    return 0;
}