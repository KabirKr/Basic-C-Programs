/* Check whether a given number is even or odd */

#include <stdio.h>
#include <conio.h>

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("%d is even", num);
	}
	else
	{
		printf("%d is odd", num);
	}

	getch();
	return 0;
}
