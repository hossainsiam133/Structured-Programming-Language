//Write a program in the programming language C, to count total of each LETTER GRADS by using while and
//switch-case-break.
#include<stdio.h>
void main()
{
    char grade,b,c,d,f;
    int a=b=c=d=f=0;
    printf("Enter a Letter grades to count/for stop-press zero:");
    //getchar() function is came from c++ and it is using as scanf to inpur grade
    //and will continue until user input '0' as a grade.
    while((grade=getchar())!='0')
    {

        switch(grade)   //switch case indicate that where the grade is matched with case statement.
        {
        case 'A':
        case 'a':
        {
            a=a+1;    //if user input the grade 'A' or 'a' then the value of a++ is changed.
            break;    //break statement is used for if the condition is true then after the value change
                    //then it will not come in the program with the last results.
        }
        case 'B':
        case 'b':
        {
            b=b+1;
            break;
        }
        case 'C':
        case 'c':
        {
            c=c+1;
            break;
        }
        case 'D':
        case 'd':
        {
            d=d+1;
            break;
        }
        case 'F':
        case 'f':
        {
            f=f+1;
            break;
        }
        default:
            printf("\nPlease enter correct Letter Grade/for stop-press zero=");
        }
    }
    printf("\nTotal A is:%d",a);
    printf("\nTotal B is:%d",b);
    printf("\nTotal C is:%d",c);
    printf("\nTotal D is:%d",d);
    printf("\nTotal F is:%d",f);
}
