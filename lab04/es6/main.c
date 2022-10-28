#include <stdio.h>
#define MAX 10

int main()
{
    float N;
    int sum, val, i;
    float average;

    printf ("Insert the value of N: ");
    scanf ("%f", &N);

    sum = 0;
    i=0;

    do
    {
        printf("please insert a value: ");
        scanf ("%d", &val);
        sum += val;

        i ++;
        average = (float) sum / i;

        if (average >= N)
            printf("Average value %.2f >= %.2f, loop continues\n", average,N);
    }
    while ((average >= N) && (i <= MAX));

    if (i < MAX)
    printf("\n\nAverage = %.2f over %d read values is < N=%.2f\n",average, i, N);
        else
    printf("\n\nN=%d values read, average = %.2f \n", i-1, average);

    return 0;
}
