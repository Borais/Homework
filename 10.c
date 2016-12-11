#include <stdio.h>
#define nMax 100

int main (int argc, char *argv[])
{
	// size of matrices
	int ai, aj, bi, bj;
	printf ("Enter the size of matrices A (MxN) and B (M1xN1) through space (1-%d).\nM, N, M1, N1: ", nMax);
	scanf("%d %d %d %d", &ai, &aj, &bi, &bj);

	// validation
	if (ai < 1 || aj < 1 || bi < 1 || bj < 1 || ai > nMax || aj > nMax || bi > nMax || bj > nMax)
	{
		printf("Error. Wrong size of matrices");
		return 0;
	}
	if (aj != bi)
	{
		printf ("Error. N must be equal to M1");
		return 0;
	}

	// matrices A, B and C
	int A[ai][aj], B[bi][bj], C[ai][bj];
	printf("\nEnter elements.\n");
	int i, j;

	// Entering elements of A
	for (i = 0; i < ai; i++)
		for (j = 0; j < aj; j++)
		{
			printf("A[%d][%d] = ", (i+1), (j+1));
			scanf("%d", &A[i][j]);
		}

	// Entering elements of B
	for (i = 0; i < bi; i++)
		for (j = 0; j < bj; j++)
		{
			printf("B[%d][%d] = ", (i+1), (j+1));
			scanf("%d", &B[i][j]);
		}
	printf("\n");

	// calculating matrix C
	int dCurElem;
	int k;

	for (i = 0; i < ai; i++)
		for (j = 0; j < bj; j++)
		{
			dCurElem = 0;
			for (k = 0; k < ai; k++)
				dCurElem += A[i][k] * B[k][j];
			C[i][j] = dCurElem;
		}

	// displaying matrix C
	for (i = 0; i < ai; i++)
	{
		for (j = 0; j < bj; j++)
		{
			printf ("C[%d][%d] = %d ", (i + 1), (j + 1), C[i][j]);
		}

		printf("\n");
	}

	return 0;
}

