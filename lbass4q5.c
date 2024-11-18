#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iSum = 0, iFac = 0, iNFac = 0;

   for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
         if(iNo % iCnt == 0)
        {
           iFac = iFac + iCnt;
        }
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iNFac = iNFac + iCnt;
        }
      
    }
    iSum = iFac - iNFac;
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}