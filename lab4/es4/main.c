#include <stdio.h>

int main()
{
    int n, row, col;
    printf("Insert an odd number n <= 40: ");
    scanf("%d", &n);
    if (n > 40 || n%2==0)
    printf("Error - number should be odd and <= 40 \n");
    else
    {
        printf("Right and isosceles triangle:\n");
        for(row = 0; row < n; row ++)
        {
            for(col = 0; col <= row; col ++)
            {
                printf("*");
            }
            printf("\n");
        }

        printf("\nSquare:\n");
        for(row = 0; row < n; row ++)
        {
            for(col = 0; col < n; col ++)
            {
                printf("*");
            }
            printf("\n");
        }

        printf("\nIsosceles triangle:\n");
        for(row = 0; row < n; row += 2)
        {
            for(col = 0; col <= (n - row) / 2; col ++)
            {
                printf(" ");
            }
            for(col = 0; col <= row; col ++)
            {
                printf("*");
            }
            printf("\n");
        }

        printf("\nIsosceles triangle upside down:\n");
        for(row = 0; row < n; row ++)
        {
            for(col = 0; col < row; col ++)
            {
                printf(" ");
            }
            for(col = 0; col < (n - 2*row); col ++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
