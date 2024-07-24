// Problem Statement :- Accept string from user and copy capital characters of that string into another string.

#include<stdio.h>

void StrCpyCap(char *str, char *dest)
{
    while(*str != '\0')
    {
        if((*str >='A') && (*str <= 'Z'))
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
    int iValue = 0;
    char Arr[50];
    char Brr[50];

    printf("Enter a String : \n");
    scanf("%[^'\n']s",Arr);

    StrCpyCap(Arr,Brr);

    printf("%s",Brr);

    return 0;
}