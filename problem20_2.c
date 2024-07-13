// problem statement :- Accept N numers from user and return the diffrence between Frequencyuency of even numbers and odd numbers

#include<stdio.h>
#include<stdlib.h>

int Frequencyuency(int *Arr, int iSize)
{
    int i = 0,iEven = 0, iOdd = 0;
    int iFrequency = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }
    iFrequency = iEven - iOdd;
    return iFrequency;
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

    iRet = Frequencyuency(Brr,iCount);

    printf("the Frequencyuency of even numbers is : %d",iRet);

    free(Brr);

    return 0;
}