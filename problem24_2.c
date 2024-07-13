// Problem Statement :- Accept character from user if character is small display its corresponding capital character and if it is capital display its corresponding small character.
//                      In other cases display as it is.

#include<stdio.h>

void Display(char ch)
{
    int i = 1,iCnt = 1;
    char cCnt = '\0';

    if((ch >= 'A') && (ch <= 'Z'))
    {
        cCnt = 'A';
        while(cCnt != ch)
        {
            cCnt ++;
            iCnt++;
        }
        cCnt = 'a';
        while(i != iCnt)
        {
            cCnt++;
            i ++;
        }
        printf("Output is : %c\n",(cCnt));
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        cCnt = 'a';
        while(cCnt != ch)
        {
            cCnt ++;
            iCnt++;
        }
        cCnt = 'A';
        while(i != iCnt)
        {
            cCnt++;
            i ++;
        }
        printf("Output is : %c\n",(cCnt));
    }
    else
    {
        printf("Output is : %c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}