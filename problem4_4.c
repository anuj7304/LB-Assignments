// problem statement :- Write a program which accepts number from user and return Summation of all its non factors.

#include<stdio.h>

int SumNonFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 2; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iCount = iCount + iCnt;
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

    iRet = SumNonFactors(iValue);

    printf("Addition of all non factors of %d is %d\n",iValue,iRet);

    return 0;
}
