//Write a program in the programming language C, to count total ODD and EVEN numbers by using switch-case-break.
// All inputs should come from the user.
#include <stdio.h>
int main()
{
    int number, count_odd = 0, count_even = 0;
    printf("Enter a number (enter -1 to exit): ");
    scanf("%d", &number);
    //This while loop will stop when user input negative value.
    while (number>=1)
    {

        switch (number % 2)   //switch case indicate that where the finitely divisible numbers by 2 is matched with case statement.
        {
        case 0:
            count_even++;    //if user input the numbers that is finitely divised by 2 is 0 then the value of count_even++ is changed.
            break;
        case 1:

            count_odd++;     ////if user input the numbers that is finitely divised by 2 is 1 or something then the value of count_odd++ is changed.
            break;


        }
        printf("Enter a number (enter -1 to exit): ");
        scanf("%d", &number);
    }

    printf("Total even numbers: %d\n", count_even);
    printf("Total odd numbers: %d\n", count_odd);

    return 0;
}


