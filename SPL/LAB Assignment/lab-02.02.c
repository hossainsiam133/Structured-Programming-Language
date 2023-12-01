///Write a program to find out upper case or lower case of English alphabets
// by using operators, in the programming language C.
#include<stdio.h>
int main()
{

    char ch;
    printf("Enter an English Alphabets:");
    scanf("%c",&ch);
    ///using conditonal control structure and (&) operator to declaring range
    ///and (||)/or operator to swip the the programs forward if previous condition is false.
    if(ch>='A' && ch<='Z'||ch>='a' && ch<='z')
    {
        if(ch>='A' && ch<='Z')
            printf("\nUpper case Letter.");
        else
            printf("\nLower case Letter.");
    }
    else
        printf("\nPlaese Enter an English Alphabets.");
}
