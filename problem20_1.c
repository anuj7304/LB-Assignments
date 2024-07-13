// problem statement :- Accept N numers from user and return frequency of even numbers

#include<stdio.h>
#include<stdlib.h>

int CountEven(int *Arr, int iSize)
{
    int i = 0;
    int iFreq = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int iCount = 0,iRet = 0,iCnt = 0;
    int *Brr = NULL;

    printf("Enter the number of elements that you want to :\n");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter elements :\n");
    for(iCnt = 0; iCnt < iCount; iCnt ++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = CountEven(Brr,iCount);

    printf("the frequency of even numbers is : %d",iRet);

    free(Brr);

    return 0;
}