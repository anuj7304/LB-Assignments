// problem statement :- Accept N numers from user and Check whether that numbers contain 11 or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int *Arr, int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if((Arr[i]) == 11)
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
    int iCount = 0,iCnt = 0;
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

    bRet = Check(Brr,iCount);

    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is Absent\n");
    }

    free(Brr);

    return 0;
}