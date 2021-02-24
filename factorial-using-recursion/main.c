/* Find factorial of any number using recursion */

#include <stdio.h>
#include <conio.h>

unsigned int factorial(unsigned int num)
{
	// 0! = 1
	if (num == 0)
		return 1;

	return num * factorial(num - 1);
}

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("Factorial of %d is %d", num, factorial(num));

	getch();
	return (0);
}