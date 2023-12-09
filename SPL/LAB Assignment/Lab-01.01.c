//Imagine that you have 5 courses, so you have 5 different marks after examination to input....
//Write a program in the programming language C, to show a list of latter grades on the output.
#include<stdio.h>
void main()
{
    int phy_mark,spl_mark,math_mark,cf_mark,english_mark; //Declaring Variables.
    printf("Enter your Physics mark,SPL Mark,Math mark,Computer fundamantal mark,english_mark:");
    scanf("%d%d%d%d%d",&phy_mark,&spl_mark,&math_mark,&cf_mark,&english_mark);  //Taking mark from the users.
    //cheacking the grading condition of Physics under the mark.
    if(phy_mark>=80)
        printf("\nLetter grades of Physics is 'A+'");
    else if(phy_mark>=70)
        printf("\nLetter grades of Physics is 'A'");
    else if(phy_mark>=60)
        printf("\nLetter grades of Physics is 'A-'");
    else if(phy_mark>=50)
        printf("\nLetter grades of Physics is 'B'");
    else if(phy_mark>=33)
        printf("\nLetter grades of Physics is 'D'");
    else
        printf("\nLetter grades of Physics is 'F'");
    //cheacking the grading condition of SPL under the mark.
    if(spl_mark>=80)
        printf("\nLetter grades of SPL is 'A+'");
    else if(spl_mark>=70)
        printf("\nLetter grade of SPL is 'A'");
    else if(spl_mark>=60)
        printf("\nLetter grades of SPL is 'A-'");
    else if(spl_mark>=50)
        printf("\nLetter grade of SPL is 'B'");
    else if(spl_mark>=33)
        printf("\nLetter grades of SPL is 'D'");
    else
        printf("\nLetter grade of SPL is 'F'");
    //cheacking the grading condition of Math under the mark.
    if(math_mark>=80)
        printf("\nLetter grades of Math is 'A+'");
    else if(math_mark>=70)
        printf("\nLetter grade of Math is 'A'");
    else if(math_mark>=60)
        printf("\nLetter grades of Math is 'A-'");
    else if(math_mark>=50)
        printf("\nLetter grade of Math is 'B'");
    else if(math_mark>=33)
        printf("\nLetter grades of Math is 'D'");
    else
        printf("\nLetter grade of Math is 'F'");
    //cheacking the grading condition of Computer fundamantal under the mark.
    if(cf_mark>=80)
        printf("\nLetter grades of Computer Fundamantal is 'A+'");
    else if(cf_mark>=70)
        printf("\nLetter grade of Computer Fundamantal is 'A'");
    else if(cf_mark>=60)
        printf("\nLetter grades of Computer Fundamantal is 'A-'");
    else if(cf_mark>=50)
        printf("\nLetter grade of Computer Fundamantal is 'B'");
    else if(cf_mark>=33)
        printf("\nLetter grades of Computer Fundamantal is 'D'");
    else
        printf("\nLetter grade of Computer Fundamantal is 'F'");
    //cheacking the grading condition of English under the mark.
    if(english_mark>=80)
        printf("\nLetter grades of English is 'A+'");
    else if(english_mark>=70)
        printf("\nLetter grade of English is 'A'");
    else if(english_mark>=60)
        printf("\nLetter grades of English is 'A-'");
    else if(english_mark>=50)
        printf("\nLetter grade of English is 'B'");
    else if(english_mark>=33)
        printf("\nLetter grades of English is 'D'");
    else
        printf("\nLetter grade of English is 'F'");
    getchar();
    return 0;
}
