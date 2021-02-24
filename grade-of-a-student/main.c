/* Show total mark, parcentage and grade of a student */

#include <stdio.h>
#include <conio.h>

int main()
{
    int sub1, sub2, sub3, sub4, sub5, totalMark, percentage;
    printf("Enter the numbers of five subjects: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub3, &sub4, &sub5);

    totalMark = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = totalMark / 5;

    printf("Your total mark is %d \n", totalMark);
    printf("Your percentage is %d \n", percentage);

    // Grades
    if (percentage >= 60)
    {
        printf("Grade A");
    }
    else if (percentage >= 45)
    {
        printf("Grade B");
    }

    else if (percentage >= 30)
    {
        printf("Grade C");
    }
    else
    {
        printf("Fail");
    }

    getch();
    return 0;
}
