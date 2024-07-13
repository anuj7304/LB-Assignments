// problem statement :- Accept N numers from user and accept another number no from user return frequency of no 

#include<stdio.h>
#include<stdlib.h>

int Frequency(int *Arr, int iSize,int iNo)
{
    int i = 0, iFrequency = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iCount = 0,iCnt = 0,iRet = 0,iValue = 0;
    int *Brr = NULL;

    printf("Enter the number of elements that you want to :\n");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter elements :\n");
    for(iCnt = 0; iCnt < iCount; iCnt ++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = Frequency(Brr,iCount,iValue);

    printf("Frequency of %d is : %d",iValue,iRet);

    free(Brr);

    return 0;
}