/* Check if a number is palindrome or not */

#include <stdio.h>
#include <conio.h>

int getReverse(int num);

int main()
{
    int num, reverse;

    printf("Enter a number: ");
    scanf("%d", &num);

    reverse = getReverse(num);

    if (num == reverse)
    {
        printf("%d is a palindrome.", num);
    }
    else
    {
        printf("%d is not a palindrome.", num);
    }

    getch();
    return 0;
}

/* returns reverse of a number */
int getReverse(int num)
{
    int remainder, reverse = 0;

    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    return reverse;
}