//problem statement :- write a program which accepts distance in kiolmeter and convert it into meter.

#include<stdio.h>

int KmtoMeter(int iKm)
{
    int iMeter = 0;

    if(iKm < 0)
    {
        iKm = -iKm ;
    }

    iMeter = iKm * 1000;

    return iMeter;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Kilometer :\n");
    scanf("%d",&iValue);

    iRet = KmtoMeter(iValue);

    printf("Distance in Meter is %d",iRet);

    return 0;
}
