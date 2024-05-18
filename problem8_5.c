//problem statement :- write a program which accepts area in squarefeet and convert it into square meter.

#include<stdio.h>

int SqfeettoSqmeter(float fNo)
{
    double dAns = 0.0;
    
    dAns = (fNo * 0.0929);

    return dAns;
}

int main()
{
    float fValue = 0;
    double dRet = 0.0;

    printf("Enter area in squarefeet :\n");
    scanf("%f",&fValue);

    dRet = SqfeettoSqmeter(fValue);

    printf("Area in Squaremeter is %f",dRet);

    return 0;
}
