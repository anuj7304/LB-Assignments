// Problem Statement :- Accept 2 strings from user and check whether the contents of two strings are equal or not.
#include<stdio.h>
#include<stdbool.h>

bool StrCmp(char *str, char *ptr)
{
    bool flag = false;

    while((*str != '\0') && (*ptr != '\0'))
    {
        if(*str == *ptr)
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
        str ++;
        ptr ++;
    }

    return flag;
}

int main()
{
    char Arr[50];
    char Brr[50];
    bool bRet = false;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter second string : \n");
    scanf("\n%[^'\n']s",Brr);

    bRet = StrCmp(Arr,Brr);

    if(bRet == true)
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("Both strings are not equal\n");
    }

    return 0;
}