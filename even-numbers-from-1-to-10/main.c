/* Display all even numbers from 1 to 10 using loop */

#include <stdio.h>
#include <conio.h>

int main()
{

    int i = 10;
    while (i >= 2)
    {
        printf("%d \t", i);
        i = i - 2;
    }

    getch();
    return 0;
}
