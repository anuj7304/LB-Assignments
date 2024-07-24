// Problem Statement :- WAP which accepts string from user and convert it into lower case.

#include<stdio.h>

void StringLower(char *str)
{
    char cCnt1 = '\0';
    char cCnt2 = '\0';
    int iCnt = 1,i = 1;

    while(*str != '\0')
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
        printf("%c",*str);
        str ++;
    }
}


int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    StringLower(Arr);
    return 0;
}