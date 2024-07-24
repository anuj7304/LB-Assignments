//Problem Statement :- Accept string from user and print below pattern
/*
    Input  : "Marvellous"
    Output :    M       a       r       v       e       l       l       o       u       s
                M       a       r       v       e       l       l       o       u
                M       a       r       v       e       l       l       o
                M       a       r       v       e       l       l
                M       a       r       v       e       l
                M       a       r       v       e
                M       a       r       v
                M       a       r
                M       a
                M
*/

#include<stdio.h>

void Pattern(char *Str)
{
    int iLength = 0,i = 0,j = 0;
    char *temp1 = Str;
    char *temp2 = Str;

    while(*temp1 != '\0')
    {
        iLength ++;
        temp1++;
    }
    
    for(i = (iLength-1);i >= 0; i--)
    {
        for(j = 0;j < iLength; j++)
        {
            if(i >= j)
            {
                printf("%c\t",*temp2);
                temp2 ++;
            }      
        }
        printf("\n");
        temp2 = Str;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the String : \n");
    scanf("%s",Arr);

    Pattern(Arr);

    return 0;
}