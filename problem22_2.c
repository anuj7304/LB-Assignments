// problem statement : Accept N numbers from user and return the smallest element.

#include<stdio.h>
#include<stdlib.h>

int Minimum(int *Arr, int iSize)
{
    int iCnt = 0;
    int iMin = 0;

    iMin = Arr[1];
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iRet = Minimum(Brr,iCount);

    printf("Smallest element is %d\n",iRet);

    free(Brr);

    return 0;
}