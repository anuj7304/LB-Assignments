// problem statement :- Accept N numers from user and accept another number no from user and Check whether no is present or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int *Arr, int iSize, int iNo)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if((Arr[i]) == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int iCount = 0,iCnt = 0,iValue = 0;
    int *Brr = NULL;
    bool bRet = false;

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

    bRet = Check(Brr,iCount,iValue);

    if(bRet == true)
    {
        printf("%d is present\n",iValue);
    }
    else
    {
        printf("%d is Absent\n",iValue);
    }

    free(Brr);

    return 0;
}