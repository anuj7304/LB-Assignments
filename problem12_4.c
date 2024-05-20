/* problem statement : Accept number form user and display below pattern
    Input :-  3
    Output:-    #   1   *   #   2   *   #   3   *
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}