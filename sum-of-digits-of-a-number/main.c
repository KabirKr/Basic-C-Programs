/* Calculate the sum of digits of a number */

#include <stdio.h>
#include <conio.h>

int calculateSumOfDigits(int number)
{
	int sum = 0;
	while (number > 0)
	{
		sum = sum + number % 10; // Get the last digit and add it to sum
		number = number / 10;	 // Remove the last digit
	}

	return sum;
}

int main()
{
	int inputNum;
	printf("Enter a number: ");
	scanf("%d", &inputNum);

	printf("Sum of digits of %d is %d \n", inputNum, calculateSumOfDigits(inputNum));

	getch();
	return (0);
}