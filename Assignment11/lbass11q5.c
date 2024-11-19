#include<stdio.h>

int CountFour(int iNo)
{
    int iSum = 0;
    while(iNo !=0)
    {
        if(iNo % 10 < 6)
        {
            iSum++;
        }
        iNo = iNo/10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);
    printf("%d",iRet);

    return 0;
}