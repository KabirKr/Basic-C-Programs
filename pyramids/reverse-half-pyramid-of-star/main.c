/*
	Print a reverse half pyramid of stars 
	where number of rows is given by user

	example: 

	*****
	****
	***
	**
	*
*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, rows;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);

	for (i = rows; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	getch();
	return (0);
}