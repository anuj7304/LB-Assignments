// problem statement : Accept N numbers from user and return the largest element.

#include<stdio.h>
#include<stdlib.h>

int Maximum(int *Arr, int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    iMax = Arr[1];
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

    iRet = Maximum(Brr,iCount);

    printf("Largest element is %d\n",iRet);

    free(Brr);

    return 0;
}