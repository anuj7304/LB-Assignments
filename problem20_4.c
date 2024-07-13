// problem statement :- Accept N numers from user and return frequency of 11 

#include<stdio.h>
#include<stdlib.h>

int Frequency(int *Arr, int iSize)
{
    int i = 0, iFrequency = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == 11)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iCount = 0,iCnt = 0,iRet = 0;
    int *Brr = NULL;

    printf("Enter the number of elements that you want to :\n");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter elements :\n");
    for(iCnt = 0; iCnt < iCount; iCnt ++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Frequency(Brr,iCount);

    printf("Frequency of 11 is : %d",iRet);

    free(Brr);

    return 0;
}