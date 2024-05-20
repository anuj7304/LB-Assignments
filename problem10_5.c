// problem statement :- Write a program which accepts a number from user and count frequency of such a digits which are less than 6.

#include<stdio.h>

int CountDigits(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        if(iNo % 10 < 6)
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

    iRet = CountDigits(iValue);

    printf("Frequency of digits less than 6 is %d",iRet);

    return 0;
}