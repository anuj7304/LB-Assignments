// Problem Statement :- WAP which accepts string from user and check whether it contains vowels in it or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
    bool result = false;

    while(*str != '\0')
    {  
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            result = true;
            break;
        }
        else
        {
            result =  false;
        }
        str ++;
    }
    return result;
}

int main()
{
    char Arr[100];
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckVowel(Arr);

    if(bRet == true)
    {
        printf("String contains vowel\n");
    }
    else
    {
        printf("There is no vowel\n");
    }
    
    return 0;
}