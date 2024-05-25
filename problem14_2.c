/* problem statement : Accept number of rows and number of columns form user and display below pattern
    Input : Row = 4 , column = 3
    Output :    A   B    C
                a   b    c
                A   B    C
                a   b    c  
*/

#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCnt1 = 0,iCnt2 = 0,iCnt3 = 0;
    char cCnt1 ='A';
    char cCnt2 = 'a';

    iCnt1 = 1;
    while(iCnt1 <= iRow)
    {
        cCnt1 = 'A';
        cCnt2 = 'a';
        for(iCnt2 = 1;iCnt2 <= iColumn; iCnt2 ++)
        {
            if(iCnt1 % 2 != 0)
            {
                printf("%c\t",cCnt1);
                cCnt1 ++;
            }
            else
            {
                printf("%c\t",cCnt2);
                cCnt2 ++;
            }
            
        }
        printf("\n");
        iCnt1++;
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