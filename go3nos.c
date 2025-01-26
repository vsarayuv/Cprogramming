/******************************************************************************
4. Write a program to find the largest of three numbers entered by the user.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter your first number: ");
    scanf("%d", &a);
    
    printf("Enter your second number: ");
    scanf("%d", &b);
    
    printf("Enter your third number: ");
    scanf("%d", &c);
    
    if ((a>b) & (a>c)){
        printf("%d is greater than %d and %d", a,b,c);
    }
    
    if ((c>b) & (c>a)){
        printf("%d is greater than %d and %d", c,b,a);
    }
    
    if ((b>a) & (b>c)){
        printf("%d is greater than %d and %d", b,c,a);
    }
    
    return 0;
}
    
