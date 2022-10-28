#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int val1, val2;
    float res;

    if (argc!=4) {
        printf("Incorrect number of arguments\n");
	return 1;
    }

    val1 = atoi(argv[1]);
    val2 = atoi(argv[2]);

    if(!strcmp(argv[3], "a")){

        res = val1 + val2;
        printf("%d + %d = %f\n", val1, val2, res);

    }else if(!strcmp(argv[3], "b")){

        res = val1 - val2;
        printf("%d - %d = %f\n", val1, val2, res);

    }else if(!strcmp(argv[3], "c")){

        res= val1 * val2;
        printf("%d * %d = %f\n", val1, val2, res);

    }else if(!strcmp(argv[3], "d")){

        if (val2 != 0) {

            res= (float)val1 / val2;
	    printf("%d / %d = %f\n", val1, val2, res);

        } else {

            printf("Division by 0 not admitted\n");

        }

    }else{

        printf("Invalid operation!\n");

    }

    return 0;
}
