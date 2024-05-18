// problem Statement : Accept number from user if number is less than 10 then print "Hello" otherwise print "Demo"

#include<stdio.h>
#include<stdbool.h>

bool Display(int iNo)
{
    if(iNo < 10)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = Display(iValue);

    if(bRet == true)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }

    return 0;
}