/* Check if the given number is divisible by 7 */

#include <stdio.h>
#include <conio.h>

int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);

	if (a % 7 == 0)
		printf("%d is divisible by 7", a);

	else
		printf("%d is not divisible by 7", a);

	getch();
	return (0);
}