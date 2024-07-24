// Problem Statement :- WAP which accepts string from user and count number of capital letters.

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt ++;
        }
        str++;
    }
    return iCnt ;
}

int main()
{
    char Arr[100];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    
    printf("number of capital letters are %d",CountCapital(Arr));

    return 0;
}