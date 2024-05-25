/* problem statement : Accept number of rows and number of columns form user and display below pattern
    Input : Row = 5 , column = 5
    Output :     1    2    3    4    5
                -1   -2   -3   -4   -5
                 1    2    3    4    5    
                -1   -2   -3   -4   -5
                 1    2    3    4    5
*/

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCnt1 = 0, iCnt2 = 0;

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++,iCnt2++)
    {
        for(iCnt2 = 1; iCnt2 <= iColumn ; iCnt2++)
        {
            if(iCnt1 % 2 != 0)
            {
                printf(" %d\t",iCnt2);
            }
            else if(iCnt1 % 2 == 0)
            {
                printf("-%d\t",iCnt2);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}