/* Find factorial of any number using loop */

#include <stdio.h>
#include <conio.h>

int main()
{
	int inputNum;
	printf("Enter a number: ");
	scanf("%d", &inputNum);

	int num = inputNum;
	int factorial = 1;

	if (inputNum < 0)
	{
		printf("No factorial of negative number \n");
	}
	else
	{
		while (inputNum >= 1)
		{
			factorial = factorial * inputNum;
			inputNum--;
		}
		printf("Factorial of %d = %d \n", num, factorial);
	}

	getch();
	return (0);
}