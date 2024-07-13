// Problem Statement :- Accept character from user if it is small then print all the characters in reverse order til 'a' .
//                      if it is capital then print all the characters from input character till 'Z'.
//                      In other cases return directly.

#include<stdio.h>

void Display(char ch)
{
    int i = 1,iCnt = 1;
    char cCnt = '\0';

    if((ch >= 'A') && (ch <= 'Z'))
    {
        cCnt = ch;
        while(cCnt != ('Z'+1))
        {
            printf("%c\t",cCnt);
            cCnt ++;
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        cCnt = ch;
        while(cCnt != ('a'-1))
        {
            printf("%c\t",cCnt);
            cCnt --;
        }
    }
    else
    {
        return ;
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