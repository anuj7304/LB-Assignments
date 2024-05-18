// problem statement :- Write a program to find factorial of given number

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iCount = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iCount = iCnt * iCount ;
    }
    return iCount;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    
    printf("Factorial of %d is %d",iValue,iRet);

    return 0;
}
