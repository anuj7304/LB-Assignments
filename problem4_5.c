// problem statement :- Write a program which accepts number from user and return Difference between Summation of all its non factors and summation of all its factors.

#include<stdio.h>

int Difference(int iNo)
{
    int iCnt = 0, iSumFact = 0, iSumNonFact = 0;
    int iDifference = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else if(iNo % iCnt != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    
    iDifference = iSumFact - iSumNonFact;

    return iDifference;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iRet = Difference(iValue);

    printf("Difference between addition of factors and non-factors %d is : %d\n",iValue,iRet);

    return 0;
}