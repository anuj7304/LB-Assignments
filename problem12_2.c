/* problem statement : Accept number form user and display below pattern
    Input :-  3
    Output:-    3   #   2   #   1   #
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
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