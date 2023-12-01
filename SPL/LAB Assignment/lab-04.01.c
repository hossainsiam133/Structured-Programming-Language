//Write a program in the programming language C, to use and compare two different loops 'while and for'.
#include<stdio.h>
void main()
{
    int num,sum_odd,i,z,odd_range,even_range;
    sum_odd=0;
    int sum_even=0;
    printf("\nEnter the Range that you want see the sum of odd/even digit behind the Range:");
    scanf("%d",&odd_range);
    i=odd_range;
    printf("\nThe odd numbers into the Range: ");
    //Using while loop to determinate the odd numbers and their sum into the range input by the user.
    //In while loop, Intialization should be initialized before the loop,Condition under the loop,and increment inside the loop.
    while(i>0)
    {
        if(i%2!=0)
        {
            sum_odd=sum_odd+i;
            printf("%d ",i);
        }
        i--;

    }
    printf("\nThe sum of Odd Numbers is=%d",sum_odd);
    even_range=odd_range;
    printf("\nThe even numbers into the Range: ");
    //Using for loop to determinate the even numbers and their sum into the range input by the user.
    //In for loop, Intialization ,Condition and increment under the loop.
    for(z=even_range; z>0; z--)
    {
        if(z%2==0)
        {
            sum_even=sum_even+z;
            printf("%d ",z);
        }

    }
    printf("\nThe sum of Even Numbers is=%d",sum_even);

}
