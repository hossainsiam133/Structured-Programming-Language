//Write a program in the programming language C, to get the multiplication result of two different 2D array.
//All inputs should come from the user.
#include<stdio.h>
int main()
{
    int i,j,r1,c1,r2,c2;
    printf("\nEnter totall row & column numbers of 1st Matrix:"); //user inserted 1st array row and column.
    scanf("%d %d",&r1,&c1);
    printf("\nEnter totall row & column numbers of 2nd Matrix:");  //user inserted 2nd array row and column.
    scanf("%d %d",&r2,&c2);
    int sum[r1][c2];    //Multiplication results matrix should be same of row of 1st and column of 2nd matrix.
    int mult=0;
    int arr1[r1][c1],arr2[r2][c2];  //Declaring size of array 1 and array 2.
    while(c1!=r2)  //Two matrix can be multiplicative if the column of 1st and row of 2nd matrix is remain same.
    {
        printf("\nError,Please enter the same numbers of row of 1st & column of 2nd Matrix...");
        printf("\nEnter totall row & column numbers of 1st Matrix:");
        scanf("%d %d",&r1,&c1);
        printf("\nEnter totall row & column numbers of 2nd Matrix:");
        scanf("%d %d",&r2,&c2);
    }
    //Inserting the values in Array 1 by the user.
    printf("\nEnter Array 1 values of ");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }
    //Inserting the values in Array 2 by the user.
    printf("\n\nEnter Array 2 values of ");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }
    //Printing array 1=
    printf("\nArray1=");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    //Printing array 2=
    printf("\nArray2=");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    //Processing multiplication of two matrix...
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(int k=0; k<c1; k++)
            {
                mult=mult+arr1[i][k]*arr2[k][j]; //The column of 1st & row of 2nd array is remain same
                sum[i][j]=mult;                  //that is why the common is assuminh as k.
            }
            mult=0;                  //Multiplication results of row & column between two matrix is storing in the cell of sum array.
        }
    }
    //printing the multiplication matrix ...
    printf("\nMult=");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


    getchar();
}


