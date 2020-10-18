#include<stdio.h>
int main()
{
	int A[2][2], B[2][2], sum, i, j;
	printf("Program to find the sum of a matrix\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter Matrix A : ", i, j);
			scanf_s("%d", &A[i][j]);
		}
	}
	printf(" \n");

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter Matrix B : ", i, j);
			scanf_s("%d", &B[i][j]);
		}
	}
	printf(" \n");

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			sum = A[i][j] + B[i][j];
			printf("Matrix A + B is : %d + %d = %d\n", A[i][j], B[i][j], sum);
		}
	}

	return 0;
}