// problem statement :- Accept a number from user and display its table on screen

#include<stdio.h>

void DisplayReverseTable(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\n",(iCnt * iNo));
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number :- \n");
    scanf("%d",&iValue);

    DisplayReverseTable(iValue);

    return 0;
}