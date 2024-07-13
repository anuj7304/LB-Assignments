// problem statement :- Accept N numers from user and return difference between summation of  even elements and odd elements

#include<stdio.h>
#include<stdlib.h>

int Difference(int *Arr, int iSize)
{
    int i = 0, iEven = 0, iOdd = 0, iDiff = 0; 

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iEven  = iEven + Arr[i];
        }
        else
        {
            iOdd = iOdd + Arr[i];
        }
    }
    iDiff = iEven - iOdd;
    return iDiff;
}

int main()
{
    int i = 0,iCount = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want to enter: \n");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter elements :\n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = Difference(Brr,iCount);

    printf("Difference between Summation of even and odd elements is : %d",iRet);

    free(Brr);
    
    return 0;
}