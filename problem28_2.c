// Problem Statement :- Accept string from user and copy contents of that string into another string.Imlement strncpy() Function

#include<stdio.h>

void StrNCpyX(char *str, char *dest,int iNo)
{
    while((*str != '\0') && (iNo != 0))
    {
        *dest = *str;
        *str ++;
        *dest ++;
        iNo --;
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

    printf("Enter the number of elements that you want to copy : \n");
    scanf("%d",&iValue);

    StrNCpyX(Arr,Brr,iValue);

    printf("%s",Brr);

    return 0;
}