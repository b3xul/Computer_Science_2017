#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

   int num1, num2, res;

   if (argc!=3) {
       printf("Incorrect number of arguments\n");
	return 1;
   }

   num1=atoi(argv[1]);
   num2=atoi(argv[2]);

   if (num1 > 10000 || num2 > 10000 || num1 < -10000 || num1 < -10000) {
	   printf("Incorrect values\n");
	   return 1;
   } else {
	   res = num1 + num2;
	   printf("The result is: %d\n", res);
   }

   return 0;
}
