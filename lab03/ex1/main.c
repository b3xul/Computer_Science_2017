/* LAB 3 - ESE 1 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //a
    int int_1, int_2;
    //b
    float float_1, float_2;
    
    //c
    printf("Insert two <int> and two <float> numbers\n");
    scanf("%d%d%f%f", &int_1, &int_2, &float_1, &float_2);

    //d-i
    printf("%-5d%-5d\n", int_1, int_2);

    //d-ii
    printf("%-5.2f\n", float_1);

    //d-iii
    printf("%.3f\n", float_2);

    // Alternative "printf"
    printf("Variable\tValue\nint_1 int2\t%-5d%-5d\nfloat_1\t\t%-5.2f\nfloat_2\t\t%.3f\n", int_1, int_2, float_1, float_2);

    return 0;

}

/*
int main()
{
    int int_1, int_2;
    float float_1, float_2;

    printf("Insert a real number (float):\n");
    scanf("%f", &float_1);

    int_1 = float_1;
    int_2 = float_1;
    float_2  = float_1;

    printf("Variable\tValue\nint_1 int2\t%-5d%-5d\nfloat_1\t\t%-5.2f\nfloat_2\t\t%.3f\n", int_1, int_2, float_1, float_2);

    return 0;
}
*/













