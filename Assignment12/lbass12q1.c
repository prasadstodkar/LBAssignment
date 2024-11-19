#include<stdio.h>

int CountEven(int iNo)
{
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo !=0)
    {
        if(iNo % 2 == 0)
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

    iRet = CountEven(iValue);
    printf("%d",iRet);

    return 0;
}