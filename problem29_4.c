// Problem Statement :- Accept 2 strings from user and copy characters of that string into anther string by converting all capital characters into small case.

#include<stdio.h>
void StrCpySmall(char *str, char *dest)
{
    char cCnt1 = '\0';
    char cCnt2 = '\0';
    int iCnt = 1,i = 1;
    
    while(*str != 0)
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            cCnt1 = 'A';
            while(cCnt1 != *str)
            {
                cCnt1 ++;
                iCnt ++;
            }
            cCnt2 = 'a';
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

    StrCpySmall(Arr,Brr);

    printf("%s",Brr);

    return 0;
}