/*
	Print a half pyramid of stars 
	where number of rows is given by user

	example: 

	1
	22
	333
	4444
	555553
*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int totalRows, rowNumber, column;
	printf("ENter the total number of rows: ");
	scanf("%d", &totalRows);

	for (rowNumber = 1; rowNumber <= totalRows; rowNumber++)
	{
		for (column = 1; column <= rowNumber; column++)
		{
			printf("%d", rowNumber);
		}
		printf("\n");
	}

	getch();
	return (0);
}