// problem statement : Accept N numbers from user and return the difference between largest and smallest element.

#include<stdio.h>
#include<stdlib.h>

int Difference(int *Arr, int iSize)
{
    int iCnt = 0;
    int iMax = 0,iMin = 0,iDiff = 0;

    iMin = Arr[1];
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
        else if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    iDiff = iMax - iMin;
    return iDiff;
}

int main()
{
    int iCount = 0,iCnt = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter the number of elements that you want : \n");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Difference(Brr,iCount);

    printf("Difference between largest and smallest elements is %d\n",iRet);

    free(Brr);

    return 0;
}