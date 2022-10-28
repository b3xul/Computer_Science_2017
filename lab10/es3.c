#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define M 4

#define TOT_LENGTH 0
#define MIN_DIST 1

int main(int argc, char *argv[])
{
    float x_coord[M];
    float y_coord[M];
    float res;
    int option;
    int i;
    int j;
    float dist;

    if(argc != 2){
        printf("Wrong number of arguments.\n");
        return 1;
    }

    if(strcmp(argv[1], "-m") == 0 ){
        option = TOT_LENGTH;
    }else if (strcmp(argv[1],"-a") == 0){
        option = MIN_DIST;
    }else{
        printf("Invalid option.\n");
        return 1;
    }

    for(i = 0; i < M; i++){
	    printf("Insert x coordinate of point %i: ", i + 1);
	    scanf("%f", &x_coord[i]);
	    printf("Insert y coordinate of point %i: ", i + 1);
	    scanf("%f", &y_coord[i]);
    }

    if(option == TOT_LENGTH){
        res = 0;

        for(i = 0; i < M - 1; i++){
            res = res + sqrt(
                pow(x_coord[i] - x_coord[i + 1], 2) +
                pow(y_coord[i] - y_coord[i + 1], 2)
            );
        }
        res = res + sqrt(
            pow(x_coord[M-1] - x_coord[0], 2) +
            pow(y_coord[M-1] - y_coord[0], 2)
        );

        printf("The total length of the path is: %f.\n", res);

    }else{

        res = INFINITY;

        for(i = 0; i < M; i++){
            for(j = i + 1; j < M; j++){
                dist = sqrt(
                    pow(x_coord[i] - x_coord[j], 2) +
                    pow(y_coord[i] - y_coord[j], 2)
                );
                if(dist < res){
                    res = dist;
                }
            }
        }

        printf("The minimum distance between two points is: %f.\n", res);

    }

    return 0;
}
