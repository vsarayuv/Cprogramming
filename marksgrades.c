/******************************************************************************

6. Write a program to determine the grade of a student based on their marks.

90 or above: A
80-89: B
70-79: C
60-69: D
Below 60: F


*******************************************************************************/
#include <stdio.h>

int main()
{
    int marks;
    char grade;
    
    printf("Enter your marks: ");
    scanf("%d", &marks);
    
    if (marks >= 90){
        grade = 'A';
    }
    
    else if ((marks >= 80) & (marks <= 89)){
        grade = 'B';
    }
    
    else if ((marks >= 70) & (marks <= 79)){
        grade = 'C';
    }
    
    else if ((marks >= 60) & (marks <= 69)){
        grade = 'D';
    }
    
    else {
        grade = 'F';
    }
    
    printf("Your final grade is %c", grade);
    return 0;
}
    
