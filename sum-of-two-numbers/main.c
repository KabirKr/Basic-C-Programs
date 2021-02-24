/* Calculate the  Sum of two numbers */

#include <stdio.h>

int main()
{
	int num_1, num_2, sum;
	printf("Enter two numbers: ");
	scanf("%d %d", &num_1, &num_2);

	sum = num_1 + num_2;
	printf("Sum of %d and %d is %d", num_1, num_2, sum);

	return (0);
}