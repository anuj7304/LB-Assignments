/* problem statement : Accept number of rows and number of columns form user and display below pattern
    Input : Row = 4 , column = 4
    Output :    *   *   *   *
                *   *   *   #
                *   *   #   #
                *   #   #   #
*/

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCnt1 = 0, iCnt2 = 0;

    for(iCnt1 = iRow; iCnt1 >= 1; iCnt1--)
    {
        for(iCnt2 = 1; iCnt2 <= iColumn; iCnt2++)
        {
            if(iCnt2 > iCnt1)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter rows : \n");
    scanf("%d",&iValue1);

    printf("Enter column : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}