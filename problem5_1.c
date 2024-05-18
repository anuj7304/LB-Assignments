// problem statement :- Write a program which accepts number from user and print that number of $ and * on screen

#include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}