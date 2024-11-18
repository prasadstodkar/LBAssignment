#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iSum = iCnt * iNo;
        printf("%d\t",iSum);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}