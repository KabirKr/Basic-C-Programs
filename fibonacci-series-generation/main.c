/* Display fibonacci series using loop */

#include <stdio.h>
#include <conio.h>

int main()
{
    int numOfTerms, i, term1, term2, nextTerm;

    term1 = 0;
    term2 = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &numOfTerms);

    // Print 1st and 2nd term
    printf("%d \t %d \t", term1, term2);

    // Print rest of the term
    for (i = 0; i < numOfTerms - 2; i++)
    {
        nextTerm = term1 + term2;
        printf("%d \t", nextTerm);

        term1 = term2;
        term2 = nextTerm;
    }

    getch();
    return 0;
}
