// problem statement :- Write a program which accepts a number from user and count frequency of four in it

#include<stdio.h>

int CountFour(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        if(iNo % 10 == 4)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("Frequency of 4 is %d",iRet);

    return 0;
}