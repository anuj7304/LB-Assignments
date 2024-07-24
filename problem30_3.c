// Problem Statement :- Accept 2 strings from user and check whether first N the contents of two strings are equal or not.
#include<stdio.h>
#include<stdbool.h>

bool StrNCmp(char *str, char *ptr, int iNo)
{
    bool flag = false;

    while((*str != '\0') && (*ptr != '\0') && (iNo != 0))
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
        iNo --;
    }

    return flag;
}

int main()
{
    char Arr[50];
    char Brr[50];
    bool bRet = false;
    int iValue = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter second string : \n");
    scanf("\n%[^'\n']s",Brr);

    printf("Enter the number of characters that you want to compare : \n");
    scanf("%d",&iValue);

    bRet = StrNCmp(Arr,Brr,iValue);

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