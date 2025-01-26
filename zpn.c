/******************************************************************************
1. Write a program to check if a given number is positive, negative, or zero.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num ==0){
        printf("Your number %d, is zero",num);
    }
    
    if (num >0){
        printf("Your number %d, is positive",num);
    }
    
    if (num <0){
        printf("Your number %d, is negative",num);
    }
    
    return 0;
}
    
