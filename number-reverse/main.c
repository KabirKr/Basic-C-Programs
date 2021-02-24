/* Display reverse of a given number */

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, originalNum, remainder, reverse = 0;

    printf("ENter a number: ");
    scanf("%d", &num);

    // Store the user input to displaly in console
    originalNum = num;

    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    printf("Reverse of %d is %d", originalNum, reverse);

    getch();
    return 0;
}
