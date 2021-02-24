/* Find maximum and minimum number in an array */

#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, min, max;
    int arr[10] = {2, 5, 4, 1, 8, 9, 11, 6, 3, 7};

    min = max = arr[0];

    for (i = 1; i < 10; i++)
    {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    printf("Minimum = %d, Maximum = %d", min, max);
    getch();
}