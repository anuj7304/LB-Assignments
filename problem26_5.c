// Problem Statement :- WAP which accepts string from user and count number of white space.

#include<stdio.h>

int CountSpace(char *str)
{
    int  iCnt = 0;
    
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt ++;
        }
        str ++;
    }
    return iCnt;
}


int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("white space = %d",CountSpace(Arr));

    return 0;
}