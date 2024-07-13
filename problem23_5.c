// Problem Statement :- Accept division of student from user and depends on the division display exam timing. There are four divisions in school as A,B,C,D.
//                      Exam of division A at 7 AM, B at 8:30 AM, C at 9:20 AM and D at 10:30 AM (Application should be case insensitive)

#include<stdio.h>

void DisplaySchedule(char Div)
{
    if((Div == 'A') || (Div == 'a'))
    {
        printf("Your exam at 7:00 AM\n");
    }
    else if((Div == 'B') || (Div == 'b'))
    {
        printf("Your exam at 8:30 AM\n");
    }
     else if((Div == 'C') || (Div == 'c'))
    {
        printf("Your exam at 9:20 AM\n");
    }
    else if((Div == 'D') || (Div == 'd'))
    {
        printf("Your exam at 10:30 AM\n");
    }
    else
    {
        printf("Invalid data\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your Division :\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}