///Write a program to find out upper case or lower case of English alphabets
//(at least 10 upper and 10 lower) in general way by using if/else, in the programming language C.
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a Alphabet (Between 1st 10) that you want to find Upper or Lower case letter:");
    scanf("%c",&ch);
    ///Using conditonal control structure to find upper case alphabets.
    if(ch=='A')
        printf("\nYour Alphabet is Upper case.");
    else if(ch=='B')
        printf("\nYour Alphabet is Upper case.");
    else if(ch=='C')
        printf("\nYour Alphabet is Upper case.");
    else if(ch=='D')
        printf("\nYour Alphabet is Upper case.");
    else if(ch=='E')
        printf("\nYour Alphabet is Upper case.");
    else if(ch=='F')
        printf("\nYour Alphabet is Upper case.");
    else if(ch=='G')
        printf("\nYour Alphabet is Upper case.");
    else if(ch=='H')
        printf("\nYour Alphabet is Upper case.");
    else if(ch=='I')
        printf("\nYour Alphabet is Upper case.");
    else if(ch=='J')
        printf("\nYour Alphabet is Upper case.");

    ///Using conditonal control structure to find lower case alphabets.
    else if(ch=='a')
        printf("\nYour Alphabet is Lower case.");
    else if(ch=='b')
        printf("\nYour Alphabet is Lower case.");
    else if(ch=='c')
        printf("\nYour Alphabet is Lower case.");
    else if(ch=='d')
        printf("\nYour Alphabet is Lower case.");
    else if(ch=='e')
        printf("\nYour Alphabet is Lower case.");
    else if(ch=='f')
        printf("\nYour Alphabet is Lower case.");
    else if(ch=='g')
        printf("\nYour Alphabet is Lower case.");
    else if(ch=='h')
        printf("\nYour Alphabet is Lower case.");
    else if(ch=='i')
        printf("\nYour Alphabet is Lower case.");
    else if(ch=='j')
        printf("\nYour Alphabet is Lower case.");
    else
        printf("\nPlease enter correct letter.");
}



