/* LAB 3 - ESE 5 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  side1, side2, side3;

    printf("Insert three side (<int>): ");
    scanf("%d%d%d", &side1, &side2, &side3);

    if((side1 < side2 + side3) && (side2 < side1 + side3) && (side3 < side1 + side2))
    {
        printf("It is a valid triangle");
        if ((side1==side2)&&(side1==side3))
            printf(" and it is equilateral");
        else
        {
            if ((side1 == side2) || (side2 == side3) || (side1 == side3))
                printf(" and it is isosceles");
            else
                printf(" and it is scalene");

            if ((side1*side1+side2*side2 == side3*side3) || (side2*side2+side3*side3 == side1*side1) || (side1*side1+side3*side3 == side2*side2))
                printf(" with a right angle");
        }
    }
    else
        if ((side1==side2+side3) || (side2==side1+side3) || (side3==side1+side2))
            printf("It is a degenerate triangle");
        else
            printf("It is not a triangle");
    printf("\n");

    return 0;
}

