/******************************************************************************
3. Write a program to check if a given character is a vowel or a consonant.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char letter;
    printf("Enter a single letter or character: ");
    scanf("%c", &letter);
    
    if ((letter == 'A')| (letter == 'E')| (letter == 'I')| (letter == 'O')| (letter == 'U')| (letter == 'a')| (letter == 'e')| (letter == 'i')| (letter == 'o')| (letter == 'u')){
        printf("%c is a vowel", letter);
    }
    
    else{
        printf("%c is a consonant", letter);
    }
    return 0;
}
    
