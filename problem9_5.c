// problem statement :- write a program which accepts range from user and display all numbers in between that range in reverse order.

#include<stdio.h>

void DisplayRangeReverse(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
    }
    else
    {
        for(iCnt = iEnd; iCnt >= iStart; iCnt--)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point :- \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point :- \n");
    scanf("%d",&iValue2);

    DisplayRangeReverse(iValue1,iValue2);

    return 0;
}