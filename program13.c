#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
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

    printf("enter number:  ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);
    
    printf("result is : %d\n",bRet);
    
    return 0;
}