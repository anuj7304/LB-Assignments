// Problem Statement :- Write a program which Display ASCII table. Table contains Symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("------------------------------------------------------\n");
    printf("Decimal\t\tHexadecimal\tOctal\t\tSymbol\n");
    printf("------------------------------------------------------\n");
    for(i = 0; i <= 255; i++)
    {
        printf("  %d\t\t %x\t\t %o\t\t %c\n",i,i,i,i);
    }
    printf("------------------------------------------------------\n");

}

int main()
{
    DisplayASCII();
    
    return 0;
}