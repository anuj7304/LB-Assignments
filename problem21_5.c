// problem statement : Accept N numbers from user and return product of all odd elements

#include<stdio.h>
#include<stdlib.h>

int Product(int *Arr, int iSize)
{
    int iCnt = 0;
    int iResult = 1;

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) % 2 != 0)
        {
            iResult = iResult * Arr[iCnt];
        }
    }
    return iResult;
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

    iRet = Product(Brr,iCount);

    printf("Product of all odd elements is %d\n",iRet);

    free(Brr);

    return 0;
}