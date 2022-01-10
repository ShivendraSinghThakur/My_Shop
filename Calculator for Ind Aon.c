#include <stdio.h>

int main()
{
    int TotalNumbrOfDays = 0;
    float Commission = 0;
    int DAILYREWARD = 0;
    float AvailableBalance = 0;
    float add = 0;
    float sum = 0;
    printf("Enter Daily Reward : ");
    scanf("%d",&DAILYREWARD);
    printf("Enter Available Balance (upto 2 decimal): ");
    scanf("%f",&AvailableBalance);
    printf("Enter today's Commission (upto 2 decimal): ");
    scanf("%f",&Commission);
    printf("Enter Number of days : ");
    scanf("%d",&TotalNumbrOfDays);
    for(int i = 0;i < TotalNumbrOfDays;i++)
    {
        float a = 0;
        for(int j = 0; j < i ; j++)
        {
            a = a + 2.32;
        }
        add = AvailableBalance + DAILYREWARD + Commission + a;
        sum = sum + add - AvailableBalance;
    }
    printf("Sum is: %f",sum);
}
