#include<stdio.h>

int DollarToINR(int iNo)
{
    int iSum = 0, iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt = iNo)
        {
            iSum = iNo * 70;
        }
    }
    

    return iSum;
}
int main()
{
   int iValue = 0, iRet = 0;

    printf("enter amount in USD:");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d",iRet);

    return 0;
}