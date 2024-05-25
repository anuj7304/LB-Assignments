/* problem statement : Accept number of rows and number of columns form user and display below pattern
    Input : Row = 4 , column = 4
    Output :    2   4   6   8   10
                1   3   5   7   9
                2   4   6   8   10
                1   3   5   7   9 
*/

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCnt1 = 0, iCnt2 = 0;
    int iNo = 1;

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++,iCnt2++)
    {
        for(iCnt2 = 1; iCnt2 <= 10 ; iCnt2++)
        {
            if(iCnt1 % 2 != 0)
            {
                if(iCnt2 % 2 == 0)
                {
                    printf("%d\t",iCnt2);
                }
            }
            else if(iCnt1 % 2 == 0)
            {
                if(iCnt2 % 2 != 0)
                {
                    printf("%d\t",iCnt2);
                }
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