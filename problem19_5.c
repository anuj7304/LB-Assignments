// problem statement :- Accept N numers from user and display all such elements which are multiples of 11

#include<stdio.h>
#include<stdlib.h>

void Divisible(int *Arr, int iSize)
{
    int i = 0;

    for(i = 0; i< iSize; i++)
    {
        if(Arr[i] % 11 == 0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}

int main()
{
    int i = 0, iCount = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you wnt to enter : \n");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Elements multiples of 11 are :\n");
    Divisible(Brr,iCount);

    free(Brr);

    return 0;
}