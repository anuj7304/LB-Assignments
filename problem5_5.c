// problem statement :- Write a program which accepts N from user and print first 5 multiples of N

#include<stdio.h>

void DisplayMultiple(int iNo)
{
    int iCnt = 0;
    int iMul = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMul = iNo * iCnt ;
        printf("%d\t",iMul);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayMultiple(iValue);

    return 0;
}