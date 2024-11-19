#include<stdio.h>

double CircleArea(float fRadius)
{
    float fArea = 0, fSum = 0;
    float PI = 3.14;
    if(fSum <= fRadius)
    {
        fSum = PI * fRadius * fRadius;
    }
    return fSum;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is:%f",dRet);


    return 0;
}