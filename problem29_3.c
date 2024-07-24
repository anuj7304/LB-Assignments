// Problem Statement :- Accept 2 strings from user and copy characters of that string into anther string by converting all small characters into capital case.

#include<stdio.h>
void StrCpyCap(char *str, char *dest)
{
    char cCnt1 = '\0';
    char cCnt2 = '\0';
    int iCnt = 1,i = 1;

    while(*str != 0)
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            cCnt1 = 'a';
            while(cCnt1 != *str)
            {
                cCnt1 ++;
                iCnt ++;
            }
            cCnt2 = 'A';
            while(i != iCnt)
            {
                i++;
                cCnt2 ++;
            }
            *str = cCnt2;
        }
        *dest = *str;
        *dest ++;
        *str ++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[50];
    char Brr[50];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    StrCpyCap(Arr,Brr);

    printf("%s",Brr);

    return 0;
}