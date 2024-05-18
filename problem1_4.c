// Accept number and check whether divisible by 5 or not

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if(iNo % 5 == 0)
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

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is Divisible by 5\n",iValue);
    }
    else
    {
        printf("%d is not Divisible by 5\n",iValue);
    }

    return 0;
}