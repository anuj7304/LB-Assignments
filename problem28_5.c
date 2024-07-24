// Problem Statement :- Accept 2 strings from user and concat second string after first string.

#include<stdio.h>
void StrConcat(char *str, char *ptr)
{
    while(*str != '\0')
    {
        str++;
    }
    while(*ptr != '\0')
    {
        *str = *ptr;
        ptr ++;
        str ++;
    }
    *str = '\0';
}

int main()
{
    char Arr[50];
    char Brr[50];

    printf("Enter first String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter second String : \n");
    scanf("\n%[^'\n']s",Brr);

    StrConcat(Arr,Brr);

    printf("%s",Arr);

    return 0;
}