// Problem Statement :- Accept 2 strings from user and check whether first N the contents of two strings are equal or not.
#include<stdio.h>

void StrRevToggle(char *str)
{
    char *Start = str ;
    char *End = str ;
    char temp = '\0';
    char cCnt1 = '\0';
    char cCnt2 = '\0';
    int iCnt = 1,i = 1;

    while(*End != '\0')
    {
        End ++;
    }
    End --;
    while(Start < End)
    {
        temp = *Start ;
        *Start = *End ;
        *End = temp ;

        Start ++;
        End --;
    }

    while(*str != '\0')
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
        else if((*str >= 'A') && (*str <= 'Z'))
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
}

int main()
{
    char Arr[50];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    StrRevToggle(Arr);

    printf("%s",Arr);

    return 0;
}