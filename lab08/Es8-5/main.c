#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define YES 1
#define NO 0
#define N 20
#define M 15

int main()
{
    char tmp[N];
    char product1[M], product2[M], product3[M], prod[M]; /* a better solution will be seen with parallel arrays */
    int price1, price2, price3, quantity;
    int askAgain; /* flag */

    printf("insert product 1 and its prize: ");
    if (gets(tmp)==NULL)
    {
        printf("Error reading product 1\n");
        return -1;
    }
    if (sscanf(tmp,"%s%d", product1, &price1)!=2)
    {
        printf("Either product name or price of product 1 has not been inserted correctly\n");
        return 1;
    }

    printf("insert product 2 and its prize: ");
    if (gets(tmp)==NULL)
    {
        printf("Error reading product 2\n");
        return -2;
    }
    if (sscanf(tmp,"%s%d", product2, &price2)!=2)
    {
        printf("Either product name or price of product 2 has not been inserted correctly\n");
        return 2;
    }

    printf("insert product 3 and its prize: ");
    if (gets(tmp)==NULL)
    {
        printf("Error reading product 3\n");
        return -3;
    }
    if (sscanf(tmp,"%s%d", product3, &price3)!=2)
    {
        printf("Either product name or price of product 3 has not been inserted correctly\n");
        return 3;
    }

    do
    {
        printf("Insert a product to look for and a quantity: ");
        if (gets(tmp)==NULL)
        {
            printf("Error in gets of product that is being looked for\n");
            return -4;
        }
        if (sscanf(tmp,"%s%d", prod, &quantity)!=2)
        {
            printf("Either product name or quantity of product that is being looked for has not been inserted correctly\n");
            return 4;
        }

        askAgain = NO;
        if (strcmp(product1, prod)==0)
            printf("\nFor %d units of product %s you have to pay %d\n", quantity, prod, quantity*price1);
        else if (strcmp(product2, prod)==0)
            printf("\nFor %d units of product %s you have to pay %d\n", quantity, prod, quantity*price2);
        else if (strcmp(product3, prod)==0)
            printf("\nFor %d units of product %s you have to pay %d\n", quantity, prod, quantity*price3);
        else
        {
            printf("\nThe product you have asked for is not available\n");
            askAgain = YES;
        }
    }
    while (askAgain == YES);

    return 0;
}
