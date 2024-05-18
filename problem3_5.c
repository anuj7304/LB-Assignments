// problem statement : - Accept one character from user and check whether that character is vowel.

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char cInput)
{
    if((cInput == 'a')||(cInput == 'e')||(cInput == 'i')||(cInput == 'o')||(cInput == 'u'))
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

    printf("Enter character :\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("%c is vowel\n",cValue);
    }
    else
    {
        printf("%c is not vowel\n",cValue);
    }

    return 0;
}
