// problem statement :- write a program to find difference between even factorial  and odd factorial of given number

#include<stdio.h>

int FactorialDifference(int iNo)
{
    int iCnt = 0;
    int iEven = 1, iOdd = 1;
    int iAns = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if(iCnt % 2 == 0)
        {
            iEven = iEven* iCnt;
        }
        if(iCnt % 2 != 0)
        {
            iOdd = iOdd * iCnt;
        }
    }
    iAns = iEven - iOdd;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDifference(iValue);

    printf("Difference between Even Factorial and Odd Factorial of %d is %d\n",iValue,iRet);
    
    return 0;
}