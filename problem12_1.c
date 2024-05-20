/* problem statement : Accept number form user and display below pattern
    Input :-  3
    Output:-    A   B   C
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char cCnt = 'A';

    while(iCnt <= (iNo-1))
    {
        printf("%c\t",cCnt);
        cCnt ++;
        iCnt ++;
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