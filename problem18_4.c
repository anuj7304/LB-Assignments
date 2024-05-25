/* problem statement : Accept number of rows and number of columns form user and display below pattern
    Input : Row = 6 , column = 6
    Output :    *       *       *       *       *       *
                *       #       #       #       *       *
                *       #       #       *       $       *
                *       #       *       $       $       *
                *       *       $       $       $       *
                *       *       *       *       *       *
*/

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCnt1 = 0, iCnt2 = 0;

    if(iRow == iColumn)
    {
        for(iCnt1 = iRow; iCnt1 >= 1; iCnt1 --)
        {
            for(iCnt2 = 1; iCnt2 <= iColumn; iCnt2 ++)
            {
                if((iCnt2 == iCnt1)||(iCnt1 == 1)||(iCnt1 == iRow)||(iCnt2 == 1)||(iCnt2 == iColumn))
                {
                    printf("*\t");
                }
                else
                {
                    if(iCnt1 > iCnt2)
                    {
                    printf("#\t");
                    }
                    if(iCnt1 < iCnt2)
                    {
                    printf("$\t");
                    }
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid Input");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter row :\n");
    scanf("%d",&iValue1);

    printf("Enter Column : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}