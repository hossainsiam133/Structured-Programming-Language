//Write a program in the programming language C, to use 'do-while and for' together in a solution.
#include<stdio.h>
int main()
{
    int num;
    //Til the while loop condition is true then the program will come in the statements under the do loop structure.
    do
    {
        printf("\nEnter Range of numbers between 1 to 100=");
        scanf("%d",&num);
    }
    while(num>100||num<0);
    printf("\nEven numbers under the Range:");
    //Using for loop to determinate the even numbers into the range input by the user.
    for(int i=1; i<=num; i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }

    printf("\nOdd numbers under the Range:");
    //Using for loop to determinate the odd numbers into the range input by the user.
    for(int i=1; i<=num; i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
}
