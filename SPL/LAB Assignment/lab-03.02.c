//Write a program in the programming language C, by using loop(s) with sentinel control to get the class average mark.
#include<stdio.h>
int main()
{
    int i,sum,std_qnt=0;
    float spl_mark;
    sum=0;
    printf("Enter the SPL Mark of 1st Student=");
    scanf("%f",&spl_mark);
    //while loop will continue until user input the spl_mark (-1).
    //System memory only save the last calculation results of sum that is used to find class avarage.
    while(spl_mark!=-1)
    {
        std_qnt++;
        sum=sum+spl_mark;
        printf("Enter the SPL Mark of %dth Student/If no marks enter (-1)=",std_qnt+1);
        scanf("%f",&spl_mark);
    }
    float avarage;
    avarage=(float)sum/std_qnt;
    printf("\nThe class avarage marks of Structured Programming Language is= %.2f",avarage);

}
