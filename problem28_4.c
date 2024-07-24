// Problem Statement :- Accept string from user and copy small characters of that string into another string.

#include<stdio.h>

void StrCpySmall(char *str, char *dest)
{
    while(*str != '\0')
    {
        if((*str >='a') && (*str <= 'z'))
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

    StrCpySmall(Arr,Brr);

    printf("%s",Brr);

    return 0;
}