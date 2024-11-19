#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if( iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }     
    printf("%d\t",iSum); 
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter The Starting Point:");
    scanf("%d",&iValue1);

    printf("Enter Ending point:");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}