// Problem Statement :- Accept 2 strings from user and copy characters of that string into anther string in reverse order.

#include<stdio.h>
void StrCpyRev(char *str, char *dest)
{
    char *Start = str;
    char *End = str;
    char temp = '\0';

    while(*End != '\0')
    {
        End++;
    }
    End --;

    while(Start <= End)
    {
        *dest = *End;
        dest ++;
        End --;
    }
    *dest = '\0';
}

int main()
{
    char Arr[50];
    char Brr[50];

    printf("Enter first String : \n");
    scanf("%[^'\n']s",Arr);

    StrCpyRev(Arr,Brr);

    printf("%s",Brr);

    return 0;
}