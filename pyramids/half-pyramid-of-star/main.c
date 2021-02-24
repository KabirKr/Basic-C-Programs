/*
	Print a half pyramid of stars 
	where number of rows is given by user

	example: 

	*
	**
	***
	****
	*****
*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, rows;
	printf("Enter the numbers of rows: ");
	scanf("%d", &rows);

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	getch();
	return (0);
}