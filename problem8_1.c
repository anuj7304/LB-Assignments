// problem statement :- write a program which accepts radius of circle from user and calculates its area. PI = 3.14

#include<stdio.h>

double AreaCircle(float fRadius)
{
    const double PI = 3.14;
    double dArea = 0.0;

    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }
    dArea = (PI * fRadius * fRadius);

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius of circle :\n");
    scanf("%f",&fValue);

    dRet = AreaCircle(fValue);

    printf("Area of circle is %f",dRet);

    return 0;
}