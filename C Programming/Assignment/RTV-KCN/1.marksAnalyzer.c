// Student Marks Analyzer (1D Array + Functions + Loops)
// What it includes:
// • Input marks of students using loops
// • Store in 1D array
// • Functions for:
//  o calculating average
//  o highest score
//  o lowest score
//  o grade distribution
// • Pointer-based traversal (optional)
// Real use: Small college marks calculator.

#include <stdio.h>

// function to calculate average
float calAvg(int m[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + m[i];
    }
    return (float)sum / n;
}

// function to calculate highest marks
int highScore(int *m, int n)
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
int lowScore(int *m, int n)
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

void gradeDistri(int m[], int n)
{
    int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0;
    for (int i = 0; i < n; i++)
    {
        int marks = m[i];
        if (marks >= 90)
            A++;
        else if (marks >= 70)
            B++;
        else if (marks >= 50)
            C++;
        else if (marks >= 30)
            D++;
        else
            F++;
    }
    printf("A (90-100) : %d\n", A);
    printf("B (70-89) : %d\n", B);
    printf("C (50-69) : %d\n", C);
    printf("D (30-49) : %d\n", D);
    printf("F (0-29) : %d\n", F);
}

int main()
{
    int n;
    int marks[100];
    // taking total number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // taking marks input
    printf("\nEnter the marks of %d Students :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }


    float avg = calAvg(marks, n);
    int highest = highScore(marks, n);
    int lowest = lowScore(marks, n);

    // printing the grades
    printf("\n----- Grade Distribution of %d Students -----\n", n);
    gradeDistri(marks, n);

    printf("\nAverage Marks = %.2f\n", avg);
    printf("Highest Marks = %d\n", highest);
    printf("Lowest Marks = %d\n", lowest);
    return 0;
}