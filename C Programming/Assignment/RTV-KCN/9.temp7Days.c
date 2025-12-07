// 9. Temperature Analytics (Array + Functions)
// Features:
// • Store 7 days temperatures
// • Functions for:
//   o average
//   o highest
//   o lowest
// • Pointer arithmetic to access array
// Real use: Weather data monitoring.


#include <stdio.h>

// function to calculate average
float calAvg(int *m, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + *m;
    }
    return (float)sum / n;
}

// function to calculate highest temperature
float highest(int *m, int n)
{
    int high = *m;
    for (int i = 0; i < n; i++)
    {
        if (*(m + i) > high)
        {
            high = *(m + i);
        }
    }
    return high;
}

// function to calculate lowest temperature
float lowest(int *m, int n)
{
    int low = *m;
    for (int i = 0; i < n; i++)
    {
        if (*(m + i) < low)
        {
            low = *(m + i);
        }
    }
    return low;
}

int main()
{
    int temp[7];

    // taking the temperature input
    printf("\nEnter %d Days Temperature(in °C):\n", 7);
    for (int i = 0; i < 7; i++)
    {
        if(scanf("%d", &temp[i]) !=1 || temp[i]<0 || temp[i]>100){
            printf("Invalid Temperature (0–100)!\n");
            return 0;
        }
    }

    // printing the temperature
    printf("\n----- Temperature Analytics -----\n");

    printf("\nAverage Temperature : %.2f°C\n",calAvg(temp, 7));
    printf("Highest Temperature : %.2f°C\n", highest(temp, 7));
    printf("Lowest Temperature : %.2f°C\n", lowest(temp, 7));
    return 0;
}