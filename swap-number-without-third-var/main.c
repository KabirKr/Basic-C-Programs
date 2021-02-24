/* Swap two number variables without using a third variable */

#include <stdio.h>
#include <conio.h>

int main()
{
	int a = 10;
	int b = 20;

	printf("Before swapping a = %d and b = %d \n", a, b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("After swapping a = %d and b = %d \n", a, b);

	getch();
	return 0;
}
