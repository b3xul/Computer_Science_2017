#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(int argc, char *argv[]) {

	FILE *fp;
	int i;
	int j;
	int found;
	int len, val;
	int mat[N][N];
	int count;

	if (argc!=4) {
		printf("Incorrect number of arguments\n");
		return 1;
	}

	fp = fopen(argv[1], "r");

	if(fp == NULL){
		printf("Cannot open file: %s\n", argv[1]);
		return 1;
	}

	//read matrix
	for(i=0;i<N;i++) {
		for(j=0;j<N;j++) {
			fscanf(fp, "%d", &mat[i][j]);
		}
	}

	//length of the sequence and value
	len = atoi(argv[2]);
	val = atoi(argv[3]);

	//search in rows
	for(i=0;i<N ;i++) {

		count = 0;
		found = 0;
		//once the sequence is found once in a row there is no need to
		//keep searching in that row
		for(j=0;j<N && found==0; j++)
		{
			if(mat[i][j] == val){
				count++;
			}else{
				count=0;
			}

			if (count==len) {
				found=1;
				printf("Sequence found in row: %d\n", i+1);
			}
		}
	}

	//search in columns
	for(i=0;i<N ;i++)
	{
		found=0;
		count=0;
		for(j=0;j<N && found==0; j++)
		{
			if (mat[j][i] == val){
				count++;
			}else{
				count=0;
			}

			if (count==len) {
				found=1;
				printf("Sequence found in column: %d\n", i+1);
			}
		}
	}

	return 0;
}
