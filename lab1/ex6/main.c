/*
Informatica/Computer Sciences

Lab 1

Exercise 6

*/

#include <stdio.h>
#include <stdlib.h>

/*Write a C program able to solve a first degree equation given in the form ax+b=0*/
int main()
{
    /*a) Declare two integer values (int) a and b, to store the coefficients of the equation*/
    int a, b;

    /*b) Declare an integer variable x, to store the result of the equation*/
    int x;

    /*c) Acquire from the keyboard the value of coefficients a and b*/
    printf("Insert coefficient a: ");
    scanf("%d", &a);

    printf("Insert coefficient b: ");
    scanf("%d", &b);

    /*d) Compute the value of x */
    x=-b/a;

    /*and display it on the screen*/
    printf("%dx+%d=0 => x=%d\n",a,b,x);

    return 0;
}
