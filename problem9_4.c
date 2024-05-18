// problem statement :- write a program which accepts range from user and return addition of all even numbers in between that range.

#include<stdio.h>

int  DisplayRangeAddition(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart < 0)  || (iStart > iEnd))
    {
        printf("Invalid Range\n");
        return 0;
    }
    else
    {
        for ( iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point : \n");
    scanf("%d",&iValue2);

    iRet = DisplayRangeAddition(iValue1,iValue2);

    if(iRet > 0)
    {
        printf("Addition even numbers is %d\n",iRet);
    }

    return 0;
}