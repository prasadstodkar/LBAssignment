#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt ,iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
         if(iNo % iCnt == 0)
         {
            iSum = iCnt * iCnt;
         }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("Multiplication of factors is : %d\n",iRet);

    return 0;
}