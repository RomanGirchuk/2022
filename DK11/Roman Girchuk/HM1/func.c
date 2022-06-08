#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int **create_matrix(int f, int z)
{
	int **matrix = (int **)malloc(sizeof(int *) * f);

	for (int i = 0; i < f; i++) {
		*(matrix + i) = (int *)malloc(sizeof(int) * z);
	}

	return matrix;
}

int **create_matrix1(int f, int z)
{
	int **matrix1 = (int **)malloc(sizeof(int *) * f);

	for (int i = 0; i < f; i++) {
		*(matrix1 + i) = (int *)malloc(sizeof(int) * z);
	}

	return matrix1;
}


int **create_matrix2(int f, int z)
{
	int **matrix2 = (int **)malloc(sizeof(int *) * f);

	for (int i = 0; i < f; i++) {
		*(matrix2 + i) = (int *)malloc(sizeof(int) * z);
	}

	return matrix2;
}

void delete_matrix(int **matrix, int f) {
	if (matrix == NULL) {
		return;
	}

	for (int i = 0; i < f; i++) {
		free (*(matrix + i));
	}

	free(matrix);
}

void delete_matrix1(int **matrix1, int f) {
	if (matrix1 == NULL) {
		return;
	}

	for (int i = 0; i < f; i++) {
		free (*(matrix1 + i));
	}

	free(matrix1);
}

void delete_matrix2(int **matrix2, int f) {
	if (matrix2 == NULL) {
		return;
	}

	for (int i = 0; i < f; i++) {
		free (*(matrix2 + i));
	}

	free(matrix2);
}

void printarray(int **matrix,int f,int z)
{
    int i=0,j=0;
    while(i<f)
    {
        j=0;
        while(j<z)
        {
            printf("%d\t", *(*(matrix + i) + j));
            j++;
        }
    i++;
    printf("\n");
    }
}
