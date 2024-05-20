// problem statement :- Write a program which accepts a number from user and return the multiplication of all digits.

#include<stdio.h>

int DigitMultiply(int iNo)
{
    int iDigit = 0;
    int iProduct = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 0)
        {
            iProduct = iProduct * iDigit ;
        }
        iNo = iNo / 10;
    }
    return iProduct;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = DigitMultiply(iValue);

    printf("Multiplication of digits in %d is %d\n",iValue,iRet);

    return 0;
}