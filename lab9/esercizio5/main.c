#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    FILE *fp;
    float matrix[N][N];
    int i, j, x0, y0, x ,y;
    float maxx;
    int flag;

    /* file opening */
    fp = fopen("esercizio5.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening the file!\n");
        return -1;
    }

    /* file reading */
    for (i = 0; i < N; i++)
        for(j = 0; j < N; j ++)
            fscanf(fp, "%f", &matrix[i][j]);

    /* file closing */
    fclose(fp);

    printf("where does the mouse start?\n");
    scanf("%d%d", &x0, &y0);
    x0 --;
    y0 --;

    flag = 1;
    while(flag)
    {
        maxx=matrix[x0][y0];
        for (i = x0 - 1; i <= x0 + 1; i ++)
            for (j = y0 - 1; j <= y0 + 1; j ++)
                if(i>=0 && j>=0 && i<N && j <N)
                    if (matrix[i][j] > maxx)
                    {
                        maxx=matrix[i][j];
                        x=i;
                        y=j;
                    }

        if (maxx > matrix[x0][y0])
        {
            printf("the mouse moves to (%d, %d) with value %f\n", x + 1, y + 1, matrix[x][y]);
            x0 = x;
            y0 = y;
        }
        else
        {
            printf("the mouse stops\n");
            flag = 0;
        }
    }

    return 0;
}

