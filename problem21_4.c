// problem statement : Accept N numbers from user and Accept Range, Display all the elements from that range

#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int *Arr, int iSize, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] >= iStart)&&(Arr[iCnt] <= iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0,iCount = 0,iCnt = 0;
    int *Brr = NULL;

    printf("Enter the number of elements that you want : \n");
    scanf("%d",&iCount);

    printf("Enter the Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    DisplayRange(Brr,iCount,iValue1,iValue2);

    free(Brr);

    return 0;
}