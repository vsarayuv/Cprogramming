/******************************************************************************
2. Write a program to determine whether a given year is a leap year or not.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    
    if ((year%4) ==0){
        if ((year%100) ==0){
            
            if ((year%400) ==0){
            printf("The year provided is a leap year");
            }
            else{
            printf("The year provided is not a leap year");
            }
        }
        else{
            printf("The year provided is a leap year");
        }
    }

    else{
        printf("The year provided is not a leap year");
    }
    return 0;
}
    
