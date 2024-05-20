/* problem statement : Accept number of rows and number of columns form user and display below pattern
    Input : Row = 4 , column = 3
    Output :    *  *   *
                *  *   *
                *  *   *
                *  *   *
*/               

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCnt1 = 0,iCnt2 = 0;

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1; iCnt2 <= iColumn; iCnt2++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}