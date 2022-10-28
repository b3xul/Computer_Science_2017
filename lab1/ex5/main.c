/*
Informatica/Computer Sciences

Lab 1

Exercise 5

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*declare 3 integer variables named: operand1, operand2 and result*/
    int operand1, operand2, result;

    /*a) Acquire from keyboard the value of operand1 and operand2, using scanf function*/
    printf("Insert first operand: ");
    scanf("%d", &operand1);

    printf("Insert second operand: ");
    scanf("%d", &operand2);

    /*b) Compute the sum of operand1 and operand2 and saves it in the result variable*/
    result=operand1+operand2;

/*c) Display on the screen the value of the result variable using printf function*/
    printf("Result: %d+%d=%d\n",operand1,operand2,result);

    return 0;
}
