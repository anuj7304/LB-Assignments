// Problem Statement :- Accept 2 strings from user and concate N characters of second string after first string. value of N should be accepted from user.

#include<stdio.h>

void StrNCat(char *str, char *ptr, int iNo)
{
    while(*str != '\0')
    {
        str ++;
    }
    while((iNo != 0))
    {
        *str = *ptr;
        ptr ++;
        str ++;
        iNo --;
    }
    *str = '\0';
}

int main()
{
    char Arr[50];
    char Brr[50];
    int iValue = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter second string : \n");
    scanf("\n%[^'\n']s",Brr);

    printf("Enter number of characters to concat : \n");
    scanf("%d",&iValue);

    StrNCat(Arr,Brr,iValue);

    printf("%s",Arr);

    return 0;
}