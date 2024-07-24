// Problem Statement :- Accept 2 strings from user and copy characters of that string into anther string by removing all white spaces.

#include<stdio.h>
void StrCpyX(char *str, char *dest)
{
    while(*str != 0)
    {
        if(*str != ' ')
        {
            *dest = *str;
            *dest ++;
        }
        *str ++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[50];
    char Brr[50];

    printf("Enter first String : \n");
    scanf("%[^'\n']s",Arr);

    StrCpyX(Arr,Brr);

    printf("%s",Brr);

    return 0;
}