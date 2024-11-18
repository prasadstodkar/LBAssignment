#include<stdio.h>
void Number(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++);
    {
        if(iNo >=0 & iNo <= 50)
        {
            printf("Small");
        }
        if(iNo > 50 & iNo <= 100)
        {
            printf("Medium");
        }
        if(iNo > 100)
        {
            printf("Large");
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number:");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;

}