#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iSum = 0;

    while(iNo !=0)
    {
        if(iNo % 10 == 0)
        {
            iSum = 1;
            break;
        }
        iNo = iNo/10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
}