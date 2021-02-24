/*
	Print a half pyramid of numbers
	where number of rows is given by user

	example: 

	1
    12
    123
    1234
    12345
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    getch();
    return 0;
}
