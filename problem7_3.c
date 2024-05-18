// problem statement :- write a program to find even factorial  of given number

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if(iCnt % 2 == 0)
        {
            iAns = iAns * iCnt;
        }
    }
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of %d is %d\n",iValue,iRet);
    
    return 0;
}