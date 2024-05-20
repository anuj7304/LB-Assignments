// problem statement :- Write a program which accepts a number from user and return the count of digits in between 3 and 7.

#include<stdio.h>

int CountRange(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        if((iNo % 10 < 7) && (iNo % 10 > 3))
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

    iRet = CountRange(iValue);

    printf("Frequency of digits between 3 and 7 is %d",iRet);

    return 0;
}