// Problem Statement :- Accept character from user and check whether it is special symbol or not (!,@,#,$,%,^,&,*).

#include<stdio.h>
#include<stdbool.h>

bool CheckSpecial(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet = CheckSpecial(cValue);
    
    if(bRet == true)
    {
        printf("It is special character\n");
    }
    else
    {
        printf("It is not special character\n");
    }

    return 0;
}