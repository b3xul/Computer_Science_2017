#include <stdio.h>
#include <stdlib.h>
#define N 10
#define M 10

void Set(int matrix[][N], int m, int n, int i, int j, int val);

int main()
{
    int matrix[M][N];
    int row, column, max_column, i, j, flag;
    int r, c, m, n, value;
    char space;

    /* initialize all the elements of the matrix to zero */
    for (i = 0; i < N; i ++)
        for (j = 0; j < M; j ++)
            matrix[i][j] = 0;

    row = 0;
    column = 0;
    max_column = 0;
    flag = 1;
    printf("Insert a matrix, print EOF at the end\n");
    do
    {
        scanf("%d%c", &matrix[row][column], &space);
        switch(space)
        {
        case ' ':
            column ++;
            if (column == M)
            {
                printf("Too many columns!");
                flag = 0;
            }
            break;

        case '\n':
            // new row
            row ++;
            if (column > max_column)
                max_column = column;
            column = 0;
            if (row == N)
            {
                printf("Too many rows!");
                flag = 0;
            }
            break;

        case '\032': /* EOF */
            if (column > max_column)
                max_column = column;
            break;

        default:
            printf("wrong input!");
            flag = 0;
        }
    }
    while ((space != '\032') && flag);

    if (flag)
    {
        printf("\nThe matrix is:\n");
        for (i = 0; i <= row; i ++)
        {
            for (j = 0; j <= max_column; j ++)
                printf("%d ", matrix[i][j]);
            printf("\n");
        }

        printf("\nInsert row and column of the starting cell: ");
        scanf("%d%d", &r, &c);
        printf("Insert the number of rows and columns of the inner matrix: ");
        scanf("%d%d", &m, &n);
        if ((m + r >= M) || (n + c >= N))
            printf("The inner matrix is not contained into the matrix!\n");
        else
        {
            printf("Insert the new value of the elements of the inner matrix: ");
            scanf("%d", &value);
            Set(matrix, m, n, r, c, value);
            printf("\nThe new matrix is:\n");
            for (i = 0; i <= row; i ++)
            {
                for (j = 0; j <= max_column; j ++)
                    printf("%d ", matrix[i][j]);
                printf("\n");
            }
        }
    }

    return 0;
}

void Set(int matrix[][N], int m, int n, int i, int j, int val)
{
    int row, column;
    for (row = i; row < i + m; row ++)
        for (column = j; column < j + n; column ++)
            matrix[row][column] = val;
    return;
}
