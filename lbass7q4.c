#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt =1, iSum = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
          iSum = iSum * iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is:%d",iRet);

    return 0;
}