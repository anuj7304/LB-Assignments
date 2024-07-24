//Problem Statement :- Accept string from user and print below pattern
/*
    Input  : "Marvellous"
    Output :    M       A       R       V       E       L       L       O       U       S
                M       A       R       V       E       L       L       O       U       S
                M       A       R       V       E       L       L       O       U       S
                M       A       R       V       E       L       L       O       U       S
                M       A       R       V       E       L       L       O       U       S
                M       A       R       V       E       L       L       O       U       S
                M       A       R       V       E       L       L       O       U       S
                M       A       R       V       E       L       L       O       U       S
                M       A       R       V       E       L       L       O       U       S
                M       A       R       V       E       L       L       O       U       S
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
    
    for(i = 0;i < iLength; i++)
    {
        for(j = 0;j < iLength; j++)
        {
            if((*temp2 >= 'a') && (*temp2 <= 'z'))
            {
                *temp2 = *temp2 - 32;
            }
            printf("%c\t",*temp2);
            temp2 ++;
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