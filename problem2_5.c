// problem statement : Accept number fro user and check whether number is enev or odd.

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("%d is even number\n",iValue);
    }
    else 
    {
        printf("%d is Odd number\n",iValue);
    }

    return 0;
}