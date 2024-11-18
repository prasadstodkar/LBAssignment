#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.00;
    
    dCelsius = (fTemp - 32)*(5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Farenheit:");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius:%lf",dRet);

    return 0;
}