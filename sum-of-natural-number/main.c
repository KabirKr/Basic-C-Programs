/* 
    For a given number calculate the sum of 
    all natural numbers upto that number
 */

#include <stdio.h>
#include <conio.h>

int getSum(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of natural numbers upto %d is %d.", num, getSum(num));

    getch();
    return 0;
}

/* returns sum of numbers from 1 to given number */
int getSum(int num)
{
    return (num < 1) ? 0 : (num + getSum(num - 1));
}