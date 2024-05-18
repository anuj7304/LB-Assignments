// problem statement :- write a program which accepts range from user and display all even numbers in between that range.

#include<stdio.h>

void DisplayEvenRange(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
    }
    else
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt ++)
        {
            if(iCnt % 2 == 0)
            {
                printf("%d\t",iCnt);
            }
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point : \n");
    scanf("%d",&iValue2);

    DisplayEvenRange(iValue1,iValue2);

    return 0;
}