// Problem Statement :- WAP which accepts string from user and return difference between frequency of small characters and frequency of capital characters.

#include<stdio.h>
int Difference(char *str)
{
    int iCap = 0, iSmall = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall ++;
        }
        str++;
    }
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCap ++;
        }
        str++;
    }
    return (iSmall-iCap);
}

int main()
{
    char Arr[100];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    
    printf("Difference is : %d",Difference(Arr));

    return 0;
}