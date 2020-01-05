#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "misc.h"

unsigned int nodesExpanded;
unsigned int nodesGenerated;
unsigned int solutionLength;
double runtime; //in milliseconds

int main ()
{
	time_t t;
	int i = 0, j = 0, k = 0;
	int array[9] = {-1, -1, -1, -1, -1, -1, -1, -1, -1};
	int initialArray[3][3] = {{-1, -1, -1}, {-1, -1, -1}, {-1, -1, -1}};
	int targetArray[3][3] = {{1, 2, 3}, {8, 0, 4}, {7, 6, 5}};

	srand((unsigned) time(&t));

	randArrayInitialization(array, 9);

	//Copy the inizialized array from 1D to 2D
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			initialArray[i][j] = array[k];
			k++;
		}
	}

	//Check the array
	printf("Initialized array:\n------------\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %d |", initialArray[i][j]);
		}
		printf("\n------------\n");
	}

	printf("\nTarget array:\n------------\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %d |", targetArray[i][j]);
		}
		printf("\n------------\n");
	}

	return 0;
}