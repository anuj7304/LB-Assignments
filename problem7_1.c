// problem statement  :- Write a program which accept number from user and display below pattern
//  Input : 3
//  Output : *  *   *   #   #   #

#include<stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}