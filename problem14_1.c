/* problem statement : Accept number of rows and number of columns form user and display below pattern
    Input : Row = 3 , column = 3
    Output :    A   A    A
                B   B    B
                C   C    C  
*/

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    char cCnt = 'A';

    if((iColumn > 26) || (iColumn < 1))
    {
        printf("Invalid Input");
    }
    else
    {
        while(iCnt1 < iColumn)
        {
            for(iCnt2 = 1; iCnt2 <= iRow; iCnt2++)
            {
                printf("%c\t",cCnt);  
            }
            cCnt++;
            printf("\n");
            iCnt1++;
        }
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