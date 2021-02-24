/*
	Print a pyramid of stars 
	where number of rows is given by user
	     
*/

#include <stdio.h>

int main()
{
	int totalRows, row, space, star;
	printf("Enter the number of rows: ");
	scanf("%d", &totalRows);

	for (row = 1; row <= totalRows; row++)
	{
		// Print the space
		for (space = 1; space <= totalRows - row; space++)
			printf(" ");

		// Print the star
		for (star = 1; star <= (2 * row) - 1; star++)
			printf("*");

		// Add a new line
		printf("\n");
	}

	return (0);
}