// problem statement : Accept N numbers from user and display summation of digits of each number

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int *Arr, int iSize)
{
    int i = 0,no = 0;
    int sum = 0,digit = 0;

    for(i = 0; i < iSize ; i++)
    {
        sum = 0;
        no = Arr[i];
        while(no > 0)
        {
            digit = no %10;
            sum = sum + digit;
            no = no /10;
        }
        printf("summation of digits in %d is : %d\n",Arr[i],sum);
    }
}

int main()
{
    int *Brr = NULL;
    int i = 0,iNo = 0;
    
    printf("Enter number of elements that you want to enter : \n");
    scanf("%d",&iNo);

    Brr = (int *)malloc(iNo * sizeof(int));

    printf("Enter the elements :\n");
    for(i = 0;i < iNo;i++)
    {
        scanf("%d",&Brr[i]);
    }

    DigitsSum(Brr,iNo);

    return 0;
}