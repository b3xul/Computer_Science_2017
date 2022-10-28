#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5 /* Max number of products */
#define M 20 /* Max product name length (+1) */

#define UNUSED_LINE -2

int insert_product(char warehouse[][M], float price[], int n, char new_product[], float price_new_product);
void print_all(char warehouse[][M], float price[], int n, float *avg, float *max);


int main()
{
    char warehouse[N][M];
    float price[N];
    int choice = 0;
    char product_name[M];
    float price_new_product;
    float avg, max;

    int i;
    int res;

    /* Initialize the content of price to -2 (UNUSED_LINE) (No products/Empty list)*/
    for (i=0;i<N;i++){
        price[i]=UNUSED_LINE;
    }


    do {

        printf("\n=== Menu ===\n");
        printf("1) Insert new product\n");
        printf("2) Print all products\n");
        printf("3) Exit\n");
        printf("Choose: ");

        scanf("%d",&choice);

        switch (choice){
            case 1:
                printf("Name of the new product: ");
                scanf("%s",product_name);
                printf("Price of the new product: ");
                scanf("%f",&price_new_product);

                res = insert_product(warehouse,price,N,product_name,price_new_product);

                if (res==1)
                    printf("Product inserted correctly\n");
                else
                {
                    if (res==0)
                        printf("Product already present in the list\n");
                    else
                        printf("The list is full. The new product cannot be included in the list\n");
                }
                break;

            case 2:
                print_all(warehouse,price,N,&avg,&max);

                printf("\n\nAverage price:%f\n",avg);
                printf("Max price:%f\n",max);
                break;

            case 3:
                break;

            default:
                printf("Unknown command selected: '%d'\n",choice);
        }


    } while (choice!=3);


    return 0;
}

/*
 * Return 1 if the product is inserted correctly, 0 if it was already present,
 * 2 if it cannot be inserted because no more space is available.
 */
int insert_product(char warehouse[][M], float price[], int n, char new_product[], float price_new_product)
{
    int j;
    int found = 0;
    int full = 1;
    int returnvalue = 1;

    /* check is the new product is already in the list */
    found = 0;
    for (j=0; j<n && found==0; j++)
    {
        if (price[j] != -2 && strcmp(new_product, warehouse[j]) == 0)
            found = 1;
    }

    if (found==0)
    {
        /* find the first empty position,
           after execution of this loop j-1 corresponds
           to first free position in "warehouse" */
        full = 1;
        for (j=0; j<n && full==1; j++)
        {
            if (price[j] == -2)
                full = 0;
        }

        if (full==0)
        {   /* insertion of the new product and its price in the list */
            strcpy(warehouse[j-1], new_product);
            price[j-1] = price_new_product;
            returnvalue = 1;
        }
        else  /* The list is full */
            returnvalue = 2;
   }
   else /* The product is already in the list */
     returnvalue = 0;

   return returnvalue;

}

void print_all(char warehouse[][M], float price[], int n, float *avg, float *max)
{
    float sum = 0;
    int defined_prices = 0;
    int i;
    *max = -1;

    printf("=== WAREHOUSE ===\n\n");
    for (i=0;i<n;i++){
        if (price[i]!=UNUSED_LINE)
        {
            printf("%20s : %8.2f\n",warehouse[i],price[i]);
            if (price[i]>0)
            {
                sum = sum+price[i];
                defined_prices++;
                if (price[i]>*max)
                {
                    *max = price[i];
                }
            }
        }
    }

    if (defined_prices>0)
    {
        *avg = sum/defined_prices;
    }
    else
    {
        *avg = -1;
    }
}


