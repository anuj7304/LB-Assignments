// problem statement :- Write a program which accepts number from user and print numbers till that number

#include<stdio.h>

void DisplayNumbers(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayNumbers(iValue);

    return 0;
}