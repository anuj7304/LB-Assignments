/* problem statement : Accept number of rows and number of columns form user and display below pattern
    Input : Row = 4 , column = 4
    Output :    1       2       3       4       5
                1       2                       5
                1               3               5
                1                       4       5
                1       2       3       4       5
*/

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCnt1 = 0, iCnt2 = 0;

    if(iRow == iColumn)
    {
        for(iCnt1 = 1; iCnt1 <= (iRow+1); iCnt1 ++)
        {
            for(iCnt2 = 1; iCnt2 <= (iColumn+1); iCnt2 ++)
            {
                if((iCnt2 == iCnt1)||(iCnt1 == 1)||(iCnt1 == (iRow+1))||(iCnt2 == 1)||(iCnt2 == (iColumn+1)))
                {
                    printf("%d\t",iCnt2);
                }
                else
                {
                    printf(" \t");
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