/* Check if the cube of a given number is divisible by 3 or not */

#include <stdio.h>
#include <conio.h>

int main()
{
	int num, cube;
	printf("Enter a number: ");
	scanf("%d", &num);

	cube = num * num * num;
	printf("Cube of %d is %d \n", num, cube);

	if (cube % 3 == 0)
	{
		printf("%d is divisible by 3", cube);
	}
	else
	{
		printf("%d is not divisible by 3", cube);
	}

	getch();
	return 0;
}
