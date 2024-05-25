/* problem statement : Accept number of rows and number of columns form user and display below pattern
    Input : Row = 4 , column = 4
    Output :    1   2   3   4
                5   6   7   8
                9   1   2   3
                4   5   6   7 
*/

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCnt1 = 0, iCnt2 = 0;
    int iNo = 1;

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++,iCnt2++)
    {
        for(iCnt2 = 1; iCnt2 <= iColumn ; iCnt2++, iNo++)
        {
            if(iNo > 9)
            {
                iNo = 1;
            }
            printf("%d\t",iNo);
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