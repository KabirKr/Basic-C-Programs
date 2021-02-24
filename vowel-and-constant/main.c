/* Check whether a given alphabet is vowel or constant */

#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Given alphabet is a vowel");
        break;

    default:
        printf("Given alphabet is a constant");
        break;
    }

    getch();
    return 0;
}
