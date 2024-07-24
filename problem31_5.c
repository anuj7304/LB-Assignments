// Problem Statement :- Accept string from user and replace each occurance of first charachter of each word into capital case.

#include<stdio.h>

int StrCap(char *Str)
{
    int iCnt = 0;
    int iLength = 0;

    while(*Str != '\0')
    {
        if((*Str == ' '))
        {
            Str ++;
        }
        else if((*Str >= 'A') && (*Str <= 'Z') || (*Str >= 'a') && (*Str <= 'z'))
        {
            if((*Str >= 'a') && (*Str <= 'z'))
            {
                *Str = *Str - 32;
            }
            while((*Str >= 'A') && (*Str <= 'Z') || (*Str >= 'a') && (*Str <= 'z'))
            {
                Str ++;
            }
        }
        else
        {
            Str ++;
        }  
    }
    return iLength;
}

int main()
{
    char Arr[50];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    StrCap(Arr);

    printf("%s",Arr);
    
    return 0;
}