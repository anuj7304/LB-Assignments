// problem statement :- Accept N numers from user and accept another number no from user and return the index of last occurance of that number

#include<stdio.h>
#include<stdlib.h>

int LastOccurance(int *Arr, int iSize, int iNo)
{
    int iCnt = 0;
    int iFind = 0;

    for(iCnt = iSize-1; iCnt >= 1; iCnt--)
    {
        if((Arr[iCnt]) == iNo)
        {
            iFind = iCnt;
            break;
        }
    }
    return iFind;
}

int main()
{
    int iCount = 0,iCnt = 0,iValue = 0;
    int *Brr = NULL;
    int iRet = 0;

    printf("Enter the number of elements that you want to :\n");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter elements :\n");
    for(iCnt = 0; iCnt < iCount; iCnt ++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    
    printf("Enter a number :\n");
    scanf("%d",&iValue);

    iRet = LastOccurance(Brr,iCount,iValue);

    if(iRet > 0)
    {
        printf("Index of Last occurance of %d is %d\n",iValue,iRet);
    }
    else
    {
        printf("%d is not present\n",iValue);
    }

    free(Brr);

    return 0;
}