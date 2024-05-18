// problem statement :- Write a program which accepts number from user and display  multiplication of its factors.

#include<stdio.h>

int MultiplyFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iCount = iCount * iCnt;
        }
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultiplyFactors(iValue);

    printf("Multiplication of fctors of %d is %d",iValue,iRet);

    return 0;
}