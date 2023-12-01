///Write a program in the programming language C, to get the summation of two tables from a 3D array
///and output should be in a 2D array. All inputs should come from the user.
#include<stdio.h>
int main()
{
    int k,i,j,row,col;
    int tab=2;  //from the questions.
    printf("Enter the Row and Column numbers of two Matrix of two tables: ");
    scanf("%d %d",&row,&col);
    ///Declaring size of table,row & column of array 1 and array 2.
    int arr1[tab][row][col],arr2[tab][row][col];
    ///Row and column cant be different in both table thats why sum array size is remain same as array 1 or 2.
    int sum[tab][row][col];
    //Inserting the values in Array 1 by the user=
    printf("\nEnter the values of 1st Matrix:\n");
    for(k=0; k<tab-1; k++)
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("Mat[%d][%d][%d]=",k,i,j);
                scanf("%d",&arr1[k][i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    //Inserting the values in Array 2 by the user=
    for(k=0; k<tab-1; k++)
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("Mat[%d][%d][%d]=",k,i,j);
                scanf("%d",&arr2[k][i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    //using sumf to convert 3D sum results to 2D sum results.
    int sumf[row][col];
    for(k=0; k<tab-1; k++)
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                sum[k][i][j]=arr1[k][i][j]+arr2[k][i][j];
                sumf[i][j]=sum[k][i][j];  //sum results of row & column between two table is storing in the cell of sumf array.
            }

        }

    }
    printf("\nArray 1=");
    for(k=0; k<tab-1; k++)
    {
        for(i=0; i<row; i++)
        {

            for(j=0; j<col; j++)
            {
                printf("%d ",arr1[k][i][j]);

            }
            printf("\n\t");
        }
        printf("\n\n");
    }

    printf("\nArray 2=");
    for(k=0; k<tab-1; k++)
    {
        for(i=0; i<row; i++)
        {

            for(j=0; j<col; j++)
            {
                printf("%d ",arr2[k][i][j]);

            }
            printf("\n\t");
        }
        printf("\n\n");
    }
    //printing the summation of two tables from a 3D array to 2D array=
    printf("\nThe sum in 2D=  ");
    for(i=0; i<row; i++)
    {

        for(j=0; j<col; j++)
        {
            printf("%d ",sumf[i][j]);
        }
        printf("\n\t\t");

    }

}

