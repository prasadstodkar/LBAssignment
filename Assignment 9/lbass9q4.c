#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSMeter = 0.00;

    dSMeter = iValue * 0.0929;

    return dSMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.00;

    printf("Enter area in square feet:");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square Meter is:%lf",dRet);

    return 0;
}