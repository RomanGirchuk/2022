#ifndef func.h
#define func.h

#include <stdlib.h>
#include <stdio.h>



int **create_matrix(int f, int z);
int **create_matrix1(int f, int z);
int **create_matrix2(int f, int z);
void printarray(int **matrix,int f,int z);
void delete_matrix1(int **matrix1, int f);
void delete_matrix2(int **matrix2, int f);
void delete_matrix(int **matrix, int f);

#endif // func.h
