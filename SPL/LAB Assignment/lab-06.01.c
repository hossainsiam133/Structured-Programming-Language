//Write a program in the programming language C, to count total/sum of each elements in an array.
#include<stdio.h>
int main()
{
    int i,val;

    printf("Enter the array values:");
    scanf("%d",&val);
    int arr[val];  //Declaring array size
    //this for loop will continue less then array size because array index start from 0
    //and also initialization i starts from 0.
    for(i=0; i<val; i++)
    {
        printf("\nArr[%d]=",i);
        scanf("%d",&arr[i]);    //stroing array index as arr[0],arr[1],arr[2]....
    }
    int sum=0;
    for(i=0; i<val; i++)
    {
        sum=sum+arr[i];     //program memorized only the last sum results that we wanted.
    }
    printf("\nTotal/sum is=%d",sum);

}
