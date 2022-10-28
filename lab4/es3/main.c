#include <stdio.h>

int main()
{
    int val, sum;

    sum=0;
    do
    {
        printf("Please input an integer number,0 to end\n");
        scanf("%d",&val);
        sum = sum+val;
    }
    while (val!=0);

    printf("The sum is %d\n", sum);

    return 0;
}
