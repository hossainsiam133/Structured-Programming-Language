//Write a program in the programming language C, by using while loop to get the class average mark of a subject.
#include<stdio.h>
int main()
{
    int i,std_qnt;
    float phy_mark,sum;
    printf("Enter the total student quantity=");
    scanf("%d",&std_qnt);
    i=0,sum=0;
    //while loop will continue before i equals with student quantity because i initialiazed 0.
    //using sum=0,beacuse single elements cant be in summation first time in the loop.
    while(i<std_qnt)
    {
        printf("\nPhysics mark of %dth student is=",i+1);
        scanf("%f",&phy_mark);
        sum=sum+phy_mark;
        i++;
    }
    float avarage;
    avarage=sum/std_qnt;
    printf("\nThe class avarage marks of Physics is= %.2f",avarage);
}
