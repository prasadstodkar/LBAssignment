#include<stdio.h>

int Factorial(int iNo)
{
    int iFac = 0, iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1,iFac = 1; iCnt <=iNo; iCnt++)
    {
       iFac = iFac * iCnt;
    }
    return iFac;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the Number:");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial is %d",iRet);

    return 0;
}