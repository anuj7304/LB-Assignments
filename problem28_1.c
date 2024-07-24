// Problem Statement :- Accept string from user and copy contents of that string into another string.

#include<stdio.h>

void StrCpyX(char *str, char *dest)
{
    while(*str != '\0')
    {
        *dest = *str;
        *str ++;
        *dest ++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[50];
    char Brr[50];

    printf("Enter a String : \n");
    scanf("%[^'\n']s",Arr);

    StrCpyX(Arr,Brr);

    printf("%s",Brr);

    return 0;
}