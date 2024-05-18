// Problem statement :- Accept amount in US dollar and return its corresponding value in Indian currency.consider 1$ as 70 ruppes

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iRs = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iRs = iNo * 70;

    return iRs;
}
int main()
{
    int iAmt = 0;
    int iRet = 0;

    printf("Enter amount in US dollar : \n");
    scanf("%d",&iAmt);

    iRet = DollarToINR(iAmt);

    printf("Value in INR is %d \n",iRet);

    return 0;
}