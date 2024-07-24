// Problem Statement :- WAP which accepts string from user and display it in reverse order.

#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end --;
    
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start ++;
        end--;
    }
    printf("Updated String is : ");
    while(*str != '\0')
    {
        printf("%c",*str);
        str ++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;
}