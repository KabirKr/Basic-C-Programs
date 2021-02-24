#include <stdio.h>
#include <conio.h>

#define ROW 3
#define COL 3

void main()
{
	int matrix[ROW][COL], i, j;

	printf("Enter the elements of matrix(%dx%d) row wise: \n", ROW, COL);

	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			scanf("%d", &matrix[i][j]);

	printf("The matrix that you have entered is: \n");

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%5d", matrix[i][j]);
		}
		printf("\n");
	}

	getch();
}