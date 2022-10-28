#include <stdio.h>
#include <stdlib.h>
#define N 11
#define R 5

int main()
{
    char m[R][N];
    int row, i, j, flag;
    FILE *fp;

    /* file opening */
    fp = fopen("swamp.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening the file!\n");
        return -1;
    }

    /* file reading */
    for (i = 0; i < R; i++)
    {
        for(j = 0; j < N; j ++)
            fscanf(fp, "%c", &m[i][j]);
        fscanf(fp, "%*c");
    }

    /* file closing */
    fclose(fp);

    for (row = 0; row < R; row ++)
    {
        i = row;
        printf("Checking row %d...\n", i);
        if(m[i][0]=='.')
        {
            printf("row %d starts with a muddy area!\n", i);
        }
        else
        {
            printf("Path: %d ", i);
            flag = 1;
            for(j = 1; j < N && (flag != 0); j++)
            {
                flag = 0;

                /* 1) next column, same row */
                if(m[i][j]=='*')
                {
                    flag = 1;
                    printf("%d ", i);
                }

                /* 2) next column, previous row */
                if ((i > 0) && (flag == 0))
                    if(m[i - 1][j]=='*')
                    {
                        flag = 1;
                        i = i - 1;
                        printf("%d ", i);
                    }

                /* 3) next column, next row */
                if ((i < R - 1) && (flag == 0))
                    if(m[i + 1][j]=='*')
                    {
                        flag = 1;
                        i = i + 1;
                        printf("%d ", i);
                    }

                if (flag == 0)
                {
                    printf(" no path exists!\n");
                }
                else
                {
                    if (j == N - 1)
                    {
                        printf(" end of the path\n");
                    }
                }
            }


        }
    }
    return 0;
}

