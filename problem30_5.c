// Problem Statement :- Accept the string from user and check whether the string is palindrome or not without considering it's case.

#include<stdio.h>
#include<stdbool.h>

bool StrPallindrome(char *str)
{
    char *Start = str ;
    char *End = str;
    bool flag = false;
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
        str ++;
    }

    while(*End != '\0')
    {
        End ++;
    }
    End --;

    while(Start < End)
    {
        if(*Start == *End)
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
        Start ++;
        End --;
    }
    return flag;
}

int main()
{
    char Arr[50];
    bool bRet = false;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    bRet = StrPallindrome(Arr);

    if(bRet == true)
    {
        printf("String is Pallindrome\n");
    }
    else
    {
        printf("String is not pallindrome\n");
    }

    return 0;
}