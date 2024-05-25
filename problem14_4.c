/* problem statement : Accept number of rows and number of columns form user and display below pattern
    Input : Row = 4 , column = 3
    Output :    4   4    4
                3   3    3
                2   2    2
                1   1    1  
*/

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCnt1 = 0, iCnt2 = 0;

    for(iCnt1 = iRow; iCnt1 >= 1; iCnt1--)
    {
        for(iCnt2 = 1; iCnt2 <= iColumn; iCnt2 ++)
        {
            printf("%d\t",iCnt1);
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