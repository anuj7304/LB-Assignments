// Problem Statement :- Accept string from user and count number of words from string.

#include<stdio.h>

int WordCount(char *Str)
{
    int iCnt = 0;

    printf("Start\n");

    while(*Str != '\0')
    {
        if((*Str == ' '))
        {
            Str ++;
        }
        else if((*Str >= 'A') && (*Str <= 'Z') || (*Str >= 'a') && (*Str <= 'z'))
        {
            while((*Str >= 'A') && (*Str <= 'Z') || (*Str >= 'a') && (*Str <= 'z'))
            {
                Str ++;
            }
            iCnt ++;
        }
        else
        {
            Str ++;
        }  
    }
    printf("END\n");
    return iCnt;
}

int main()
{
    char Arr[50];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Number of words are : %d",WordCount(Arr));
    
    return 0;
}