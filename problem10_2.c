// problem statement :- Write a program which accepts a number from user and check whether it contains zero or not

#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        if(iNo % 10 == 0)
        {
            return true;
        }
        iNo = iNo/10;
    }
    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("There is no zero\n");
    }

    return 0;
}