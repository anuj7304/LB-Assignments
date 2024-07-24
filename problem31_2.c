// Problem Statement :- Accept string from user and return length of largest word.

#include<stdio.h>

int WordCount(char *Str)
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
            iCnt = 0;
            while((*Str >= 'A') && (*Str <= 'Z') || (*Str >= 'a') && (*Str <= 'z'))
            {
                iCnt ++;
                Str ++;
            }

            if(iLength < iCnt)
            {
                iLength = iCnt;
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

    printf("Length of largest word is : %d",WordCount(Arr));
    
    return 0;
}