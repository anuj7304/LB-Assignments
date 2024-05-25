/* problem statement : Accept number of rows and number of columns form user and display below pattern
    Input : Row = 4 , column = 3
    Output :    A   A    A
                B   B    B
                C   C    C
                D   D    D  
*/

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCnt1 = 0, iCnt2 = 0;
    char cCnt = 'A';

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++,cCnt++)
    {
        for(iCnt2 = 1; iCnt2 <= iColumn; iCnt2 ++)
        {
            printf("%c\t",cCnt);
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