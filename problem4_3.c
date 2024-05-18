// problem statement :- Write a program which accepts number from user and display its all non factors.

#include<stdio.h>

void DisplayNonFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 2; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{  
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Non factors of %d are : \n",iValue);

    DisplayNonFactors(iValue);

    return 0;
}
