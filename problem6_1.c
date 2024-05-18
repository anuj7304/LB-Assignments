/* problem statement : - Wrtie a program which accept number from user and if
    less than 50 print small
    between 50 to 100 print medium
    greater than 100 then print large
*/

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if((iNo <= 50) && ( iNo < 100))
    {
        printf("Medium");
    }
    else if(iNo >= 100)
    {
        printf("Large");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}