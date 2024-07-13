// problem statement : Accept N numbers from user and display all such elements which contains 3 digits in it.

#include<stdio.h>
#include<stdlib.h>

void Digits(int *Arr, int iSize)
{
    int i = 0,No = 0;
    int iCount = 0;
    
    printf("Elements with 3 digits are : \n");
    for(i = 0; i < iSize; i++)
    {
        No = Arr[i];
        iCount = 0;

        while(No > 0)
        {
            No = No / 10;
            iCount ++;
        }
        if(iCount == 3)
        {
            printf("%d\n",Arr[i]);
        }
    }
}

int main()
{
    int iCount = 0,iCnt = 0;
    int *Brr = NULL;

    printf("Enter the number of elements that you want : \n");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    Digits(Brr,iCount);

    free(Brr);

    return 0;
}