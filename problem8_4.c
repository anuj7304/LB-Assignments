//problem statement :- write a program which accepts temperature in Fahrenheit  and convert it into Celsius.

#include<stdio.h>

double FhtoCs(float fNo)
{
    double dCelsius = 0.0;

    dCelsius = (fNo - 32) * (0.555556);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temerature in fahrenhit :\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %f",dRet);

    return 0;
}