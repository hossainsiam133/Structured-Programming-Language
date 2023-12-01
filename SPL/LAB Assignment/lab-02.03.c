//Write a program to find out VOWELS (upper case or lower case) of English alphabets by using operators, in the programming language C.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an English Alphabets:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'||ch>='a' && ch<='z')
    {
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            printf("\nUpper Case VOWELS");

        else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            printf("\nLower Case VOWELS");
        else if(ch!='A'||ch!='E'||ch!='I'||ch!='O'||ch!='U')
            printf("\nIt is not VOWELS!");
        else if(ch!='a'||ch!='e'||ch!='i'||ch!='o'||ch!='u')
            printf("\nIt is not VOWELS!");
    }
    else
        printf("\nPlease Enter an English Alphabet.You Entered a Garvage values.");
}

