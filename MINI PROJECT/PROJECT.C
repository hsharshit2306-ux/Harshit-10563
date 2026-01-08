#include <stdio.h>

int main()
{
    int i, n;
    float marks[10], total = 0, percentage;
    char grade;


    printf("Enter number of subjects: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++)
    {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    
    percentage = (total / (n * 100)) * 100;

    
    if(percentage >= 90)
        grade = 'A';
    else if(percentage >= 80)
        grade = 'B';
    else if(percentage >= 70)
        grade = 'C';
    else if(percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    
    printf("\n--Student Result--\n");
    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    printf("Grade = %c\n", grade);

    return 0;
}