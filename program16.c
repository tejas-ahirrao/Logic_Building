#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {   return true;    }
    else
    {   return false;   }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("enter number:  ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {   printf("%d is Even Number\n",iValue);   }
    else
    {   printf("%d is odd Number\n",iValue);    }
    
    return 0;
}