#include<stdio.h>

int CountDiff(int iNo)
{
    int iSum= 0;
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;
    
    while(iNo !=  0)
    {
        iDigit = iNo % 10;
        if(iNo % 2 == 0)
        {
            iEven = iEven +  iDigit;
        } 
        if(iNo % 2 != 0)
        {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo / 10;
        iSum = iEven - iOdd;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);
    
    iRet = CountDiff(iValue);

    printf("The Difference is:%d",iRet);

    return 0;
}