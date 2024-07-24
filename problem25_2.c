// Problem Statement :- WAP which accepts string from user and count number of small characters.

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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
    
    printf("number of small characters are %d",CountSmall(Arr));

    return 0;
}