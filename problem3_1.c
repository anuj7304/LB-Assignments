// problem statement :- Write a program which accepts one number from user and prints that number of even numbers on screen.

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= (2*iNo); iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\n",iCnt);
        }   
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    
    return 0;
}