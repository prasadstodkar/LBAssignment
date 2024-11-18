#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0, iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    { 
        if(iCnt <= iNo)
        {
            printf("$*\t");
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}