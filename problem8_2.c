//problem statement :- write a program which accepts width and height  of rectangle  from user and calculates its area.

#include<stdio.h>

double AreaRectangle(float fWidth, float fHeight)
{
    double dArea = 0.0;

    if(fWidth < 0)
    {
        fWidth = -fWidth;
    }
    if(fHeight < 0)
    {
        fHeight = -fHeight;
    }

    dArea = (fWidth * fHeight);

    return dArea;
}
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width :\n");
    scanf("%f",&fValue1);

    printf("Enter Height :\n");
    scanf("%f",&fValue2);

    dRet = AreaRectangle(fValue1,fValue2);

    printf("Area of Rectangle is %f",dRet);

    return 0;
}