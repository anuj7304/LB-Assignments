// problem statement :- Write a program which accepts number from user and display its factors in decreasing order.

#include<stdio.h>

void DisplayReverseFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for (iCnt = iNo/2 ; iCnt >= 1 ; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Factors of %d in reverse order :\n",iValue);
    DisplayReverseFactors(iValue);

    return 0;
}
